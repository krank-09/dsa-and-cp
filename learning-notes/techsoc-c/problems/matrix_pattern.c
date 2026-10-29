// TechSoc editorial, pattern 2: print a 4x4 matrix pattern.

// pattern number 2 
#include <stdio.h>
int main() {
    int matrix[4][4] = {
        {1, 0, 2, 0},
        {0, 3, 0, 4},
        {5, 0, 6, 0},
        {0, 7, 0, 8}
    };
        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == 0)
                printf("x "); 
            else
                printf("%d ", matrix[i][j]); 
        }
        printf("\n"); 
    }
return 0;
}
