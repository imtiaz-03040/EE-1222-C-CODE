#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 1.0; // first term is 1
    int n = 1;
    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    term = 1.0; // first term in the series
    do {
        term *= -x * x / ((2 * n - 1) * (2 * n)); // next term
        sum += term;
        n++;
    } while (fabs(term) > fabs(sum) * 0.000001); // 0.0001% accuracy

    printf("\nCalculated cos(%.6lf) = %.10lf", x, sum);
    printf("\nUsing math.h cos(%.6lf) = %.10lf", x, cos(x));

    return 0;
}
