#include <stdio.h>
#include <string.h>
struct PWIOI_Employee
{
    int Registration_number;
    float Salary;
    char Name[10];
};
void show(struct PWIOI_Employee P); // Function Prototype
void show(struct PWIOI_Employee P)  // Function Definition
{
    printf("The registration number of employee is %d, Salary %f and Employee name is  %s\n", P.Registration_number, P.Salary, P.Name);
}

int main()
{
    struct PWIOI_Employee P1;
    P1.Registration_number=25113200;

    P1.Salary=25000000;

    strcpy(P1.Name,"Pragyan");
    show(P1);
    return 0;
}