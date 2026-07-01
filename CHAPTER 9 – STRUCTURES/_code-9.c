#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};
int compare(struct date d1, struct date d2); // function prototype
int compare(struct date d1, struct date d2)  // function definition
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
    struct date d1 = {25, 10, 2021};
    struct date d2 = {25, 10, 2022};
    printf("%d\n", compare(d1, d2));
    return 0;
}