#include <stdio.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1;
    struct vector *ptr = &v1;
    ptr->x = 1;
    ptr->y = 2;
    printf("%di+%dj\n",ptr->x,ptr->y );
    return 0;
}