#include<stdio.h>
struct Rect{int loda;
int bhosda;};
int main()
{
    struct Rect c;
    c.loda=3;
    c.bhosda=4;
    int area;
    area=c.loda*c.bhosda;
    printf("area=%d",area);
    return 0;
}

