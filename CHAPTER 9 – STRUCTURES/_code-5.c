#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};

int main(){
    struct complex n1;
    n1.real=1;
    n1.imaginary=5;
    printf("%d+%di\n",n1.real,n1.imaginary);
}