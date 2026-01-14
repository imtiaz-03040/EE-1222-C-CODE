#include<stdio.h>
#include<math.h>
void main ()
{
    int n,i;
    float sum=1.0;
    float fact=1.0;


printf("Enter the value of n:");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+((1.0)/fact);

    }
    printf("sum=%f\n",sum);
}
