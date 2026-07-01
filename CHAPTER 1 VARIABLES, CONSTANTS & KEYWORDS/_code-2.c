// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter the value of r ");
//     scanf("%d",&r);
//     float area =3.14*r*r;
//     printf("The area of circle is %f ",area);
//     return 0;
// }

#include<stdio.h>
int main(){
    int r ,h;
    printf("Enter the value of r and h ");
    scanf("%d%d",&r,&h);
    float volume =3.14*r*r*h;
    printf("The volume of cylinder is %f ",volume);
    return 0;
}
