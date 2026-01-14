#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    char department[30];
};

int main()
{
    FILE *file;
    struct Student students[10];
    int i;

    file = fopen("D:\FILES\\pupils.txt", "wb");
    if (file == NULL)
        {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter 10 students' information:\n");
    for (i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        fflush(stdin);
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Department: ");
        fflush(stdin);
        fgets(students[i].department, 30, stdin);
        students[i].department[strcspn(students[i].department, "\n")] = 0;
    }

    fwrite(students, sizeof(struct Student), 10, file);
    fclose(file);

    printf("\nData successfully saved to 'D:\FILES\\pupils.txt' file.\n");

    file = fopen("D:\FILES\\pupils.txt", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    printf("========================\n");

    struct Student temp;
    for (i = 0; i < 10; i++) {
        fread(&temp, sizeof(struct Student), 1, file);
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", temp.name);
        printf("Roll: %d\n", temp.roll);
        printf("Department: %s\n", temp.department);
        printf("-------------------\n");
    }
    fclose(file);

    file = fopen("D:\FILES\\pupils.txt", "w");
    if (file == NULL)
        {
        printf("Error opening text file!\n");
        return 1;
    }

    fprintf(file, "Student Records:\n");
    fprintf(file, "================\n");
    for (i = 0; i < 10; i++) {
        fprintf(file, "Student %d:\n", i + 1);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Roll: %d\n", students[i].roll);
        fprintf(file, "Department: %s\n", students[i].department);
        fprintf(file, "-------------------\n");
    }
    fclose(file);

    printf("Text format also saved to 'D:\FILES\\pupils.txt' file.\n");

    file = fopen("D:\FILES\\pupils.txt", "a");
    if (file == NULL)
        {
        printf("Error opening file for appending!\n");
        return 1;
    }

    fprintf(file, "\nTotal Students: 10\n");
    fprintf(file, "Data entry completed.\n");
    fclose(file);

    printf("Appended additional information to text file.\n");

    return 0;
}
