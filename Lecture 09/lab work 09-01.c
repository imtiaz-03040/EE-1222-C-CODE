#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char names[10][50];
    int rolls[10];
    char departments[10][30];
    int i, searchRoll, found = 0;
    char tempName[50], tempDept[30];
    int tempRoll;

    file = fopen("D:\FILES\\students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter 10 students' information:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = 0;

        printf("Roll: ");
        scanf("%d", &rolls[i]);

        printf("Department: ");
        fflush(stdin);
        fgets(departments[i], 30, stdin);
        departments[i][strcspn(departments[i], "\n")] = 0;

        fprintf(file, "%s,%d,%s\n", names[i], rolls[i], departments[i]);
        printf("\n");
    }
    fclose(file);

    file = fopen("D:\FILES\\students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Enter roll number to search: ");
    scanf("%d", &searchRoll);

    while (fscanf(file, "%49[^,],%d,%29[^\n]\n", tempName, &tempRoll, tempDept) == 3) {
        if (tempRoll == searchRoll) {
            printf("\nStudent Found:\n");
            printf("Name: %s\n", tempName);
            printf("Roll: %d\n", tempRoll);
            printf("Department: %s\n", tempDept);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll %d not found.\n", searchRoll);
    }

    fclose(file);

    file = fopen("D:\FILES\\students.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }
    fprintf(file, "--- End of student records ---\n");
    fclose(file);

    return 0;
}
