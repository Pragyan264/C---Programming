#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("code-1.txt", "r");
    if (fptr == NULL)
    {
        printf("The File is not exist\n");
    }
    else
    {
       int a,b,c;
       fscanf(fptr,"%d %d %d",&a,&b,&c);
       printf("%d\n",a);
       printf("%d\n",b);
       printf("%d\n",c);
    }
    return 0;
}