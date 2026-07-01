#include <stdio.h>
float fahrenheit(float C); // function prototype
float fahrenheit(float C)  // function definition
{
    return (9 * C) / 5 + 32;
}
int main()
{
    float C;
    printf("Enter the value of C");
    scanf("%f", &C);
    float convert= fahrenheit(C);
    printf("The convergen of celcius %f into fahrenheit %f", C, convert);
    return 0;
}