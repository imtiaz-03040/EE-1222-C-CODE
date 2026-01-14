#include <stdio.h>

void main()
{
    int i, highest, lowest, a[30];
    float sum = 0, average;

    printf("Enter 30 random values: ");
    for(i = 0; i < 30; i++)
    {
        scanf("%d", &a[i]);
    }
     highest = lowest = a[0];
    for(i = 0; i < 30; i++)
    {
        if(a[i] > highest)
            highest = a[i];
        if(a[i] < lowest)
            lowest = a[i];
        sum += a[i];
    }
    average = sum / 30.0;
    printf("Average value: %.2f\n", average);
    printf("Highest value: %d\n", highest);
    printf("Lowest value: %d\n", lowest);
}
