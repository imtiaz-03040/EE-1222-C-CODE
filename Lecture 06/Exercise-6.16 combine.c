#include <stdio.h>

void pattern_a() {
    int size = 5;

    printf("Pattern (a): Solid 5x5 Square\n\n");

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("S    ");
        }
        printf("\n");
    }
}

void pattern_b() {
    int size = 5;

    printf("\nPattern (b): Square with Border Only\n\n");

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i == 0 || i == size-1 || j == 0 || j == size-1) {
                printf("S    ");
            } else {
                printf("     ");
            }
        }
        printf("\n");
    }
}

int main() {
    int choice;

    printf("Choose pattern to display:\n");
    printf("1. Pattern (a) - Solid Square\n");
    printf("2. Pattern (b) - Square with Border\n");
    printf("3. Both Patterns\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            pattern_a();
            break;
        case 2:
            pattern_b();
            break;
        case 3:
            pattern_a();
            pattern_b();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
