#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    // fp = fopen("output.txt", "w");  // open file in write mode
    fp = fopen("D:\FILES\\output.txt", "w"); // ----- Desired Location

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a file writing example.\n");

    fclose(fp);
    printf("Data written successfully.\n");

    return 0;
}

