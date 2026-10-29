// Transpose of a matrix.

// input elements in a 2d array and print its transpose
#include<stdio.h>
#define KUMAR main
int KUMAR(){
    int m,n;
    printf("enter rows and columns of array : ");
    scanf("%d%d",&m,&n);
    int ar[m][n];
    printf("enter elements for array :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("element at [%d][%d] : ",i+1,j+1);
        scanf("%d",&ar[i][j]);
        }
    }
    printf("original array:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    printf("transpose of array :\n");
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }        
return 0;
}