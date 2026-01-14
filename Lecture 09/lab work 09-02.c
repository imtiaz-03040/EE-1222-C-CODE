#include <stdio.h>
struct Person
{
    char name[50];
    int roll;
    char dept[50];
};

int main()
{
    struct Person p[10];
    FILE *fp;

    fp = fopen("D:\FILES\\learners.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("Enter data for 10 students:\n\n");

    for (int i = 0; i < 10; i++)
        {
        printf("Person %d:\n", i + 1);

        printf("Name: ");
        getchar();
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strcspn(p[i].name, "\n")] = '\0';

        printf("Roll: ");
        scanf("%d", &p[i].roll);
        getchar();

        printf("Department: ");
        fgets(p[i].dept, sizeof(p[i].dept), stdin);
        p[i].dept[strcspn(p[i].dept, "\n")] = '\0';

        fprintf(fp, "%s;%d;%s\n", p[i].name, p[i].roll, p[i].dept);

        printf("\n");
    }

    fclose(fp);

    printf("All data saved to file 'D:\FILES\\learners.txt'\n");

    return 0;
}

