// Loop syntax: for, while, do-while.

#include <stdio.h>
#define TechSociety main

int TechSociety()
{
    printf("Welcome to Tech Society Classes!\n\n");
    
    int n; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("| ");
    for(int j=1; j<=n ; j++)
    {
        printf("------ | ");
    }
    printf("\n");
    
    for(int i=1; i<=n; i++)
    {
        printf("| ");
        for(int j=1; j<=n ; j++)
        {
            printf("{%d, %d} | ", i, j);
        }
        printf("\n");
        
        printf("| ");
        for(int j=1; j<=n ; j++)
        {
            printf("------ | ");
        }
        printf("\n");
    }
    
    return 0;
}
