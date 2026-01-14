#include <stdio.h>
#include <math.h>

double sin_series(double x) {
    double term = x;
    double sum = term;
    int n = 1;

    do {
        term = -term * x * x / ((2*n) * (2*n + 1));
        sum += term;
        n++;
    } while (fabs(term) > 0.000001 * fabs(sum));

    return sum;
}

double cos_series(double x) {
    double term = 1.0;
    double sum = term;
    int n = 1;

    do {
        term = -term * x * x / ((2*n - 1) * (2*n));
        sum += term;
        n++;
    } while (fabs(term) > 0.000001 * fabs(sum));

    return sum;
}

double special_series() {
    double sum = 0.0;
    double term;
    int n = 1;

    do {
        term = pow(1.0/n, n);
        sum += term;
        n++;
    } while (term > 0.000001 * sum);

    return sum;
}

int main() {
    int choice;
    double x;

    printf("Choose function to evaluate:\n");
    printf("1. sin(x)\n");
    printf("2. cos(x)\n");
    printf("3. SUM = 1 + (1/2)^2 + (1/3)^3 + ...\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter x in radians: ");
            scanf("%lf", &x);
            printf("sin(%.6f) = %.10f\n", x, sin_series(x));
            printf("Actual sin(%.6f) = %.10f\n", x, sin(x));
            break;

        case 2:
            printf("Enter x in radians: ");
            scanf("%lf", &x);
            printf("cos(%.6f) = %.10f\n", x, cos_series(x));
            printf("Actual cos(%.6f) = %.10f\n", x, cos(x));
            break;

        case 3:
            printf("Series sum = %.10f\n", special_series());
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
