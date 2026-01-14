#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void write_initial_data(char *fname) {
    FILE *fp = fopen("D:\FILES\\seekers.txt", "w");
    if (!fp) {
        printf("File open error!\n");
        exit(1);
    }

    fprintf(fp, "Arif Rahman;101;CSE\n");
    fprintf(fp, "Bipasha Sinha;102;EEE\n");
    fprintf(fp, "Chandan Roy;103;Civil\n");
    fprintf(fp, "Deepa Khatun;104;BBA\n");
    fprintf(fp, "Ehsan Ullah;105;CSE\n");
    fprintf(fp, "Farhana Alam;106;Textile\n");
    fprintf(fp, "Golam Mostafa;107;ME\n");
    fprintf(fp, "Hasina Begum;108;Pharmacy\n");
    fprintf(fp, "Imran Khan;109;CSE\n");
    fprintf(fp, "Jannatul Ferdous;110;Law\n");

    fclose(fp);
}

void display_all(char *fname) {
    FILE *fp = fopen("D:\FILES\\seekers.txt", "r");
    if (!fp) {
        printf("File read error!\n");
        return;
    }

    char line[200];

    printf("\n----- All Records -----\n");
    while (fgets(line, sizeof(line), fp)) {
        char name[50], dept[50];
        int roll;
        sscanf(line, "%[^;];%d;%[^\n]", name, &roll, dept);
        printf("Name: %s | Roll: %d | Dept: %s\n", name, roll, dept);
    }
    printf("------------------------\n");

    fclose(fp);
}

void append_record(char *fname) {
    FILE *fp = fopen("D:\FILES\\seekers.txt", "a");
    if (!fp) {
        printf("File append error!\n");
        return;
    }

    char name[50], dept[50];
    int roll;

    getchar();
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter roll: ");
    scanf("%d", &roll);
    getchar();

    printf("Enter department: ");
    fgets(dept, sizeof(dept), stdin);
    dept[strcspn(dept, "\n")] = '\0';

    fprintf(fp, "%s;%d;%s\n", name, roll, dept);

    fclose(fp);
    printf("Record added.\n");
}

void search_record(char *fname) {
    FILE *fp = fopen("D:\FILES\\seekers.txt", "r");
    if (!fp) {
        printf("File read error!\n");
        return;
    }

    int option;
    printf("Search by: 1) Name  2) Roll : ");
    scanf("%d", &option);

    char line[200];
    int found = 0;

    if (option == 1) {
        char key[50];
        getchar();
        printf("Enter name: ");
        fgets(key, sizeof(key), stdin);
        key[strcspn(key, "\n")] = '\0';

        while (fgets(line, sizeof(line), fp)) {
            char name[50], dept[50];
            int roll;
            sscanf(line, "%[^;];%d;%[^\n]", name, &roll, dept);

            if (strcmp(name, key) == 0) {
                printf("\nRecord Found!\n");
                printf("Name: %s | Roll: %d | Dept: %s\n", name, roll, dept);
                found = 1;
                break;
            }
        }
    }
    else if (option == 2) {
        int key;
        printf("Enter roll: ");
        scanf("%d", &key);

        while (fgets(line, sizeof(line), fp)) {
            char name[50], dept[50];
            int roll;
            sscanf(line, "%[^;];%d;%[^\n]", name, &roll, dept);

            if (roll == key) {
                printf("\nRecord Found!\n");
                printf("Name: %s | Roll: %d | Dept: %s\n", name, roll, dept);
                found = 1;
                break;
            }
        }
    }
    else {
        printf("Invalid option!\n");
    }

    if (!found)
        printf("No match found.\n");

    fclose(fp);
}

int main() {
    char fname[] = "seekers.txt";
    write_initial_data(fname);

    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Display all\n");
        printf("2. Add new record\n");
        printf("3. Search record\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) display_all(fname);
        else if (choice == 2) append_record(fname);
        else if (choice == 3) search_record(fname);
        else if (choice == 4) break;
        else printf("Invalid input!\n");
    }

    return 0;
}

