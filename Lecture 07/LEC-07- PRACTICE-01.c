#include <stdio.h>
#include <stdio.h>
void main()
{
     int arr[30],*ptr, i ,highest, lowest;
    float average, sum = 0;
   ptr = arr;
   printf("Enter 30 integer values :");
    for (i = 0; i < 30; i++)
        {
        scanf("%d", (ptr+i));
    }

    highest = *ptr;
    lowest = *ptr;

    for (i = 0; i < 30; i++)
        {
        if (*(ptr + i) > highest)
            highest = *(ptr + i);
        if (*(ptr + i) < lowest)
            lowest = *(ptr + i);
        sum += *(ptr + i);
    }
    average = sum / 30.0;

    printf("\nHighest Value = %d\n", highest);
    printf("Lowest Value  = %d\n", lowest);
    printf("Average Value = %.2f\n", average);
}
