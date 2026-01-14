#include <stdio.h>

struct Employee
{
    char name[30];
    int ID;
    float Salary;
};

int main()
{
    struct Employee el;

    printf("Enter name: ");
    scanf("%s", &el.name); // [^\n]
    printf("Enter ID: ");
    scanf("%d", &el.ID);
    printf("Enter Salary: ");
    scanf("%f", &el.Salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", el.name);
    printf("ID: %d\n", el.ID);
    printf("Salary: %.2f\n", el.Salary);

    return 0;
}
