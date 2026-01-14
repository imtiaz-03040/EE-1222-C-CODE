#include <stdio.h>

struct Address {
    char city[30];
    int zip;
};

struct Employee {
    char name[30];
    int id;
    struct Address addr; // nested structure
};

int main() {
    struct Employee el;

    printf("Enter employee name: ");
    scanf("%s", &el.name);

    printf("Enter employee ID: ");
    scanf("%d", &el.id);

    printf("Enter city: ");
    scanf("%s", &el.addr.city);

    printf("Enter ZIP code: ");
    scanf("%d", &el.addr.zip);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", el.name);
    printf("ID: %d\n", el.id);
    printf("City: %s\n", el.addr.city);
    printf("ZIP: %d\n", el.addr.zip);

    return 0;
}
