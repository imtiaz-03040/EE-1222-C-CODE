#include<stdio.h>
void main ()
{
    int a=10,b=20,c=30,sum;
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    sum=*p+*q+*r;
    printf("%d", sum);
}
