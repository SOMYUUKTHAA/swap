#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a=10,b=20,e;
    printf("before swap: %d %d",a,b);
    e=swap(&a,&b);
    printf("after swap:%d %d",a,b);
}
int swap(int *c,int *d)
{
    int t;
    t=*c;
    *c=*d;
    *d=t;
    printf("\nswapping\t%d\t%d",*c,*d);
    return(c);
    return(d);
}
