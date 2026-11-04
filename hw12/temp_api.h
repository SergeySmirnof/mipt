
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

void print_data(const Temperature data[], int count);
void add_data(Temperature data[], int count, Temperature record);
int delete_data(Temperature data[], int count, int index);
void sort_data(Temperature data[], int count);
Temperature* create_data(void);
int load_data(Temperature data[], int capacity, const char *filename);
