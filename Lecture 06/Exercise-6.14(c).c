#include <stdio.h>
#include <math.h>

double series_sum() {
    double sum = 0.0;
    double term;
    int n = 1;

    do {
        term = pow(1.0/n, n);  // (1/n)^n
        sum += term;
        n++;
    } while (term > 0.000001 * sum);  // 0.0001% accuracy

    return sum;
}

int main() {
    double result = series_sum();

    printf("Series sum = %.10f\n", result);
    printf("Number of terms used: %d\n", (int)(1.0/0.000001)); // Approximate

    return 0;
}
