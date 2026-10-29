// Count odd numbers in a matrix and print their sum.

// count odd nums and print their sum in an array
#include <stdio.h>
int main()
{
    int m, n, sum = 0,c=0;
    printf("enter num of rows and columns in an array : ");
    scanf("%d%d", &m, &n);
    int ar[m][n];
    printf("enter the elements of the array :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element num [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
            if (ar[i][j] % 2 != 0)
            {
                sum +=ar[i][j];
                c+=1;
            }
        }
    }
    printf("the num of odd numbers in the array is : %d\n",c);
    printf("the sum of odd nums in the array is : %d",sum);
return 0; 
}