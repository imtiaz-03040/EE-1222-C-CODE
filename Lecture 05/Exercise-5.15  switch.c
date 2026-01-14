#include<stdio.h>
#include<math.h>
void main ()
{
   double x;
   char T;
   printf("Enter the angle in radian:");
   scanf("%lf", &x);
   printf("Enter the trigonometric function type(S/s for sin, C/c for cos, T/t for tan):");
   scanf(" %c", &T);

   switch(T)
   {
   case 'S':
   case 's':
    printf("sin(%.2f)=%.4f\n", x, sin(x));
    break;

   case 'C':
   case 'c':
    printf("cos(%.2f)=%.4f\n", x, cos(x));
    break;

   case 'T':
   case 't':
    printf("tan(%.2f)=%.4f\n", x, tan(x));
    break;

   default:
    printf("Invalid trigonometric function entered.\n");
    break;
   }



}
