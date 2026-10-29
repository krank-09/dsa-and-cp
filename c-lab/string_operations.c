// String operations: case conversion, reverse, compare and more.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256 
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]); 
    }
}
void toUpperCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper((unsigned char)str[i]); 
    }
}

int main() {
    char str1[MAX], str2[MAX], result[MAX]; 
    int choice, cmp;

    printf("Enter a string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; 

    do {
        printf("\nSelect an operation:\n");
        printf("1. Find Length\n2. Concatenate Another String\n3. Copy String\n4. Compare with Another String\n5. Convert to Lowercase\n6. Convert to Uppercase\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Length of the string is: %zu\n", strlen(str1)); 
                break;

            case 2:
                printf("Enter another string to concatenate: ");
                fgets(str2, MAX, stdin);
                str2[strcspn(str2, "\n")] = 0;
                strcat(str1, str2); 
                printf("Concatenated string: %s\n", str1);
                break;

            case 3:
                 strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;

            case 4:
                printf("Enter another string to compare: ");
                fgets(str2, MAX, stdin);
                str2[strcspn(str2, "\n")] = 0;
                cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("The strings are equal.\n");
                } else if (cmp > 0) {
                    printf("The first string is greater.\n");
                } else {
                    printf("The second string is greater.\n");
                }
                break;

            case 5:
                toLowerCase(str1);
                printf("String in lowercase: %s\n", str1);
                break;

            case 6:
                toUpperCase(str1);
                printf("String in uppercase: %s\n", str1);
                break;

            case 7:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}

