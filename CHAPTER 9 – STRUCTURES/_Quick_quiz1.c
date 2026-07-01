#include <stdio.h>
#include <string.h>
struct PWIOI_Employee
{
    int Registration_number;
    float Salary;
    char Name[10];
};
int main()
{
    struct PWIOI_Employee P1, P2, P3;
    printf("Enter P1 employee code\n");
    scanf("%d", &(P1.Registration_number));
    printf("Enter P1 employee Salry\n");
    scanf("%f", &(P1.Salary));
    printf("Enter P1 employee Name\n");
    scanf("%s", &(P1.Name));

    printf("%d %f %s\n", P1.Registration_number, P1.Salary, P1.Name);
    printf("\n");
    
    printf("Enter P2 employee code\n");
    scanf("%d", &(P2.Registration_number));
    printf("Enter P2 employee Salry\n");
    scanf("%f", &(P2.Salary));
    printf("Enter P2 employee Name\n");
    scanf("%s", &(P2.Name));

    printf("%d %f %s\n", P2.Registration_number, P2.Salary, P2.Name);
    printf("\n");

    printf("Enter P3 employee code\n");
    scanf("%d", &(P3.Registration_number));
    printf("Enter P3 employee Salry\n");
    scanf("%f", &(P3.Salary));
    printf("Enter P3 employee Name\n");
    scanf("%s", &(P3.Name));

    printf("%d %f %s\n", P3.Registration_number, P3.Salary, P3.Name);
    printf("\n");
    return 0;
}