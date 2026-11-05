#include <stdio.h>
#include "temp_functions.h"
#include <stdlib.h>

void month_average(const Temperature data[], int count, int year, int month)
{
    float sum = 0;
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (data[i].year == year && data[i].month == month) {
            sum += data[i].temperature;
            total++;
        }
    }

    if (total == 0) {
        printf("No data\n");
    }
    else {
        float average = sum / total;
        printf("month_average=%f\n", average);
    }
}

void month_minimum(const Temperature data[], int count, int year, int month)
{
    int min = 0;
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (data[i].year == year && data[i].month == month) {
            if (total == 0 || data[i].temperature < min) {
                min = data[i].temperature;
            }
            total++;
        }
    }

    if (total == 0) {
        printf("No data\n");
    }
    else {
        printf("month_minimum=%d\n", min);
    }
}

void month_maximum(const Temperature data[], int count, int year, int month)
{
    int max = 0;
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (data[i].year == year && data[i].month == month) {
            if (total == 0 || data[i].temperature > max) {
                max = data[i].temperature;
            }
            total++;
        }
    }

    if (total == 0) {
        printf("No data\n");
    }
    else {
        printf("month_maximum=%d\n", max);
    }
}

void year_average(const Temperature data[], int count, int year)
{
    float sum = 0;
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (data[i].year == year) {
            sum += data[i].temperature;
            total++;
        }
    }

    if (total == 0) {
        printf("No data\n");
    }
    else {
        float average = sum / total;
        printf("year_average=%f\n", average);
    }
}

void year_minimum(const Temperature data[], int count, int year)
{
    int min = 0;
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (data[i].year == year) {
            if (total == 0 || data[i].temperature < min) {
                min = data[i].temperature;
            }
            total++;
        }
    }

    if (total == 0) {
        printf("No data\n");
    }
    else {
        printf("year_minimum=%d\n", min);
    }
}

void year_maximum(const Temperature data[], int count, int year)
{
    int max = 0;
    int total = 0;

    for (int i = 0; i < count; i++) {
        if (data[i].year == year) {
            if (total == 0 || data[i].temperature > max) {
                max = data[i].temperature;
            }
            total++;
        }
    }

    if (total == 0) {
        printf("No data\n");
    }
    else {
        printf("year_maximum=%d\n", max);
    }
}

void print_data(const Temperature data[], int count){
    for (int i = 0; i < count; i++) {
        printf("%04d;%02d;%02d;%02d;%02d;%d\n",
               data[i].year,
               data[i].month,
               data[i].day,
               data[i].hour,
               data[i].minute,
               data[i].temperature);
    }
}
void add_data(Temperature data[], int count, Temperature record){
     data[count] = record;
}
int delete_data(Temperature data[], int count, int index)
{
    if (index < 0 || index >= count) {
        printf("Wrong index\n");
        return count;
    }

    for (int i = index; i < count - 1; i++) {
        data[i] = data[i + 1];
    }

    return count - 1;
}
void sort_data(Temperature data[], int count)
{
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (data[j].temperature > data[j + 1].temperature) {
                Temperature temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
Temperature* create_data(int capacity)
{
    Temperature *data = malloc(capacity * sizeof(Temperature));
    return data;
}
int load_data(Temperature **data, int *capacity, const char *filename)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Cannot open file\n");
        return -1;
    }

int count = 0;
int line_number = 0;
char line[32];

while (fgets(line, sizeof(line), file) != NULL) {
    line_number++;
    int i = 0;

while (line[i] != '\0' && line[i] != '\n') {
    i++;
}

if (line[i] != '\n') {
    int ch = fgetc(file);

    if (ch != EOF) {
        while (ch != '\n' && ch != EOF) {
            ch = fgetc(file);
        }

        printf("Too long line %d\n", line_number);
        continue;
    }
}

    if (count >= *capacity) {
    int new_capacity = *capacity * 2;

    Temperature *temp = realloc(
        *data,
        new_capacity * sizeof(Temperature)
    );

    if (temp == NULL) {
        printf("Cannot allocate memory\n");
        fclose(file);
        return -1;
    }

    *data = temp;
    *capacity = new_capacity;
}

    Temperature record;
    char extra;

    int rez = sscanf(line, "%d;%d;%d;%d;%d;%d %c",
                 &record.year,
                 &record.month,
                 &record.day,
                 &record.hour,
                 &record.minute,
                 &record.temperature,
                 &extra);

    if (rez != 6) {
        printf("Wrong data in line %d\n", line_number);
        continue;
    }
    if (record.year < 1000 || record.year > 9999 ||
    record.month < 1 || record.month > 12 ||
    record.day < 1 || record.day > 31 ||
    record.hour < 0 || record.hour > 23 ||
    record.minute < 0 || record.minute > 59 ||
    record.temperature < -99 || record.temperature > 99) {

    printf("Wrong data in line %d\n", line_number);
    continue;
}
int days = 31;

if (record.month == 4 || record.month == 6 ||
    record.month == 9 || record.month == 11) {
    days = 30;
}
else if (record.month == 2) {
    days = 28;

    if (record.year % 400 == 0 ||
        (record.year % 4 == 0 && record.year % 100 != 0)) {
        days = 29;
    }
}

if (record.day > days) {
    printf("Wrong data in line %d\n", line_number);
    continue;
}

    (*data)[count] = record;
    count++;
}

    fclose(file);
    return count;
}