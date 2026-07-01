#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v,struct vector w); //function prototype
struct vector sumvector(struct vector v,struct vector w)//function definition
{
   struct vector v3={v.x+w.x, v.y+w.y};
    return v3;
}
int main(){
    struct vector v1,v2,v3;
    v1.x=1;
    v1.y=2;
    v2.x=3;
    v2.y=4;
    printf("%di+%dj\n",v1.x,v1.y);
    printf("%di+%dj\n",v2.x,v2.y);
    v3=sumvector(v1,v2);
    printf("%di+%dj\n",v3.x,v3.y);
    return 0;
}