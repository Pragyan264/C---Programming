#include <stdio.h>
#include <string.h>
int main()
{
    char encrypt[] = "Nz!obnf!jt!Qsbhzbo!Lbtbveibo";
    for (int i = 0; i < strlen(encrypt); i++)
    {
        encrypt[i] = encrypt[i] - 1;
    }
    printf("%s\n", encrypt);
    return 0;
}