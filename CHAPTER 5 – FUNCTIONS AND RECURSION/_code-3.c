#include <stdio.h>
float force(float mass);  // function prototype
float force(float mass)  // function definition
{
    return mass*9.8;
}
int main()
{
    float mass;
    printf("Enter the value of mass in kg\n");
    scanf("%f", &mass);
    float result=force( mass);
    printf("The force of attraction on a body of mass %f exerted by earth %fN",mass,result);
    return 0;
}