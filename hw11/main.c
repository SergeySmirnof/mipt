#include "temp_api.h"

int main()
{
    const Temperature data[] = {
        {2026, 11, 2, 9, 0, -5},
        {2026, 11, 2, 12, 30, 3},
        {2026, 12, 1, 10, 0, -12}
    };

    month_average(data, 3, 2026, 11);
    month_minimum(data, 3, 2026, 11);
    month_maximum(data, 3, 2026, 11);
    year_average(data, 3, 2026);
    year_minimum(data, 3, 2026);
    year_maximum(data, 3, 2026);
    return 0;
}
