#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1,v2;
    v1.x=1;
    v1.y=2;
    v2.x=3;
    v2.y=4;
    printf("%di+%dj\n",v1.x,v1.y);
    printf("%di+%dj\n",v2.x,v2.y);
    return 0;
}