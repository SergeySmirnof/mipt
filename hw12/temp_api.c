#include <stdio.h>
#include "temp_api.h"

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
Temperature* create_data(void)
{
    static Temperature data[100];
    return data;
}
int load_data(Temperature data[], int capacity, const char *filename)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Cannot open file\n");
        return -1;
    }

    int count = 0;
    while (count < capacity) {
    int rez = fscanf(file, "%d;%d;%d;%d;%d;%d",
                     &data[count].year,
                     &data[count].month,
                     &data[count].day,
                     &data[count].hour,
                     &data[count].minute,
                     &data[count].temperature);

   if (rez == EOF) {
    break;
}

if (rez != 6) {
    printf("Wrong data in record %d\n", count + 1);
    fclose(file);
    return -1;
}

    count++;
}

    fclose(file);
    return count;
}