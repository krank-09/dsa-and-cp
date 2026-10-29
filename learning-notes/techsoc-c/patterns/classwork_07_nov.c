// Number patterns (classwork, 7 Nov).

#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t", k);
                k++;
            }
        }
        else
        {
            int a = k + (n - 1);
            for (int j = 0; j < n; j++)
            {
                printf("%d\t", a - j);
            }
            k += n;
        }
        printf("\n");
    }
    return 0;
}