// Search an array for a value.

// menu driven program to perform linear search and binary search on an array
#include <stdio.h>
#define KUMAR main
int KUMAR()
{
    int m, n;
    printf("enter rows and coulmns of array : ");
    scanf("%d%d", &m, &n);
    int ar[m][n];
    printf("enter the elements of the array :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element num [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
        }
    }
    int num, opn, linear = 0;
    printf("enter num to be searched : ");
    scanf("%d", &num);
    printf("select type of search :\n1.linear search\n2.binary search\n");
    scanf("%d", &opn);
    switch (opn)
    {
    case 1:
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i][j] == num)
                {
                    printf("the element %d is present at [%d][%d]\n", num, i + 1, j + 1);
                    linear = 1;
                }
            }
        }
        if (!linear)
            printf("%d not found\n", num);
        break;
    case 2:
    {
          int low = 0,target = num;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (ar[mid] == target) {
            return mid; 
        } else if (ar[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    }

    default:
        printf("invalid input\n");
        break;
    }
    return 0;
}