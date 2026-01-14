#include <stdio.h>
#include <math.h>

double series(double x, int n)
{
    double sum = 0, term;
    int i;
    for (i = 0; i < n; i++)
        {
        term = pow(-1, i) * pow(x, 2*i + 1) / tgamma(2*i + 2);
        sum += term;
    }
    return sum;
}
void main()
{
    double x, result;
    int n;
    printf("Enter value of x: ");
    scanf("%lf", &x);
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    result = series(x, n);
   printf("f(x) = %.8lf\n", result);

}

