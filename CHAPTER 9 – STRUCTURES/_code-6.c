#include <stdio.h>

 struct c
{
    int real;
    int imaginary;
};
void display(struct c c1)
{
    printf("%d+%di\n", c1.real, c1.imaginary);
}
int main()
{
    int i = 0;
    struct c carr[5];
    printf("enter the complex number \n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter real number \n");
        scanf("%d", &(carr[i].real));
        printf("Enter imaginary number \n");
        scanf("%d", &(carr[i].imaginary));
        display(carr[i]);
    }

    return 0;
}