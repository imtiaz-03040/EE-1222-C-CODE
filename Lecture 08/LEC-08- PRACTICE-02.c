#include <stdio.h>

int fibonacciSum(int n)
{
    int a = 0, b = 1, c, sum = 0, i;
    for(i = 1; i <= n; i++)
        {
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }
    return sum;
}

int main()
{
    int n, result;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    result = fibonacciSum(n);
    printf("Sum of Fibonacci series = %d\n", result);
    return 0;
}
