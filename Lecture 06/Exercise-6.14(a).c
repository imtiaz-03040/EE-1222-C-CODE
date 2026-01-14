#include <stdio.h>
#include <math.h>

double sin_series(double x) {
    double term = x;  // First term: x
    double sum = term;
    int n = 1;

    do {
        // Calculate next term: (-1)^n * x^(2n+1) / (2n+1)!
        term = -term * x * x / ((2*n) * (2*n + 1));
        sum += term;
        n++;
    } while (fabs(term) > 0.000001 * fabs(sum));  // 0.0001% accuracy

    return sum;
}

int main() {
    double x;
    printf("Enter x in radians: ");
    scanf("%lf", &x);

    double result = sin_series(x);
    double actual = sin(x);

    printf("sin(%.6f) using series = %.10f\n", x, result);
    printf("sin(%.6f) actual value = %.10f\n", x, actual);
    printf("Error = %.10f\n", fabs(result - actual));

    return 0;
}
