#include "temp_functions.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
    printf("Use -h for help\n");
    return 0;
}
char *filename = NULL;
int rez;
int month = 0;

while ((rez = getopt(argc, argv, "hf:m:")) != -1) {
    switch (rez) {
        case 'h':
            printf("Temperature statistics\n");
            printf("-h: show help\n");
            printf("-f <file.csv>: read data from file\n");
            printf("-m <month>: show month statistics\n");
            return 0;
        case 'f':
            filename = optarg;
            break;   
        case 'm':
             if (sscanf(optarg, "%d", &month) != 1 ||
             month < 1 || month > 12) {
            printf("Wrong month. Use 1-12\n");
            return 1;
            }
             break;     

        case '?':
            printf("Unknown option. Use -h for help\n");
            return 1;
    }
}
if (filename == NULL) {
    printf("Use -f data.csv\n");
    return 1;
}
int capacity = 100;

Temperature *data = create_data(capacity);

if (data == NULL) {
    printf("Cannot allocate memory\n");
    return 1;
}

int count = load_data(&data, &capacity, filename);

if (count == -1) {
    free(data);
    return 1;
}
if (count == 0) {
    printf("No data\n");
    free(data);
    return 1;
}

int year = data[0].year;


//sort_data(data, count);
if (month != 0) {
    month_average(data, count, year, month);
    month_minimum(data, count, year, month);
    month_maximum(data, count, year, month);
}
else {
    for (int m = 1; m <= 12; m++) {
        printf("Month: %d\n", m);
        month_average(data, count, year, m);
        month_minimum(data, count, year, m);
        month_maximum(data, count, year, m);
    }

    year_average(data, count, year);
    year_minimum(data, count, year);
    year_maximum(data, count, year);
}

   
    free(data);

    return 0;
}
