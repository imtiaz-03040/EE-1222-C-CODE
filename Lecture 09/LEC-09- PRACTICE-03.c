#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];
    char target[50]; // will be used for searching
    int lineNumber = 0;
    int found = 0; // outcome indicator

    fp = fopen("D:\FILES\\hmm.txt", "r");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Enter the word to search: ");
    scanf("%s", target);
    while (fgets(line, sizeof(line), fp)) {
        lineNumber++;
        if (strstr(line, target)) { // strstr returns non-NULL if word found
            printf("Found '%s' in line %d: %s", target, lineNumber, line);
            found = 1;
        }
    }
    if (!found)
        printf("'%s' not found in the file.\n", target);

    fclose(fp);
    return 0;
}
