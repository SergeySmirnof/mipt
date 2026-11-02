
typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature; 
} Temperature;

void month_average(const Temperature data[], int count, int year, int month);
void month_minimum(const Temperature data[], int count, int year, int month);
void month_maximum(const Temperature data[], int count, int year, int month);
void year_average(const Temperature data[], int count, int year);
void year_minimum(const Temperature data[], int count, int year);
void year_maximum(const Temperature data[], int count, int year);


