#include<stdio.h>
void main ()
{
    int a[3]={10,20,30};
    int *p,i;
    p=a;
    for(i=0;i<3;i++)
    {
        printf("%d\n",*(p+i));
    }
}
