#include <stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} DT;
int compare(DT d1, DT d2); // function prototype
int compare(DT d1, DT d2)  // function definition
{
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
    {
        return 0;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    DT d1 = {25, 10, 2025};
    DT d2 = {25, 10, 2025};
    printf("%d\n", compare(d1, d2));
    return 0;
}