#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("D:\FILES\\keeping.txt", "w");
    if (fp == NULL)
        {
        printf("Error opening file!\n");
        printf("Please ensure the directory exists.\n");
        return 1;
    }

    fprintf(fp,"The serial Numbers are:\n");
    int x = 0;
    for (int i=0; i<=9;i++)
    {
        x = x + i;
        fprintf(fp, "%d\n", x);
    }

    fclose(fp);
    printf("Data written successfully to D:\FILES\\keeping.txt\n");
    return 0;
}
