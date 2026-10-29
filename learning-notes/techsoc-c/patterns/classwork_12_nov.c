// Triangle patterns (classwork, 12 Nov).

#include <stdio.h>
// int main()
// {
//     int n, k = 1;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (int j = 1; j <= (2 * (n - 1) - (2 * i)); j++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
//}
// // #include<stdio.h>
// // int main(){
// //     int n,k=1; scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         for(int j=i;j<n;j++){
// //             printf("%d\t",k);
// //             k++;
// //         }
// //         printf("\n");
// //     }
// // return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = n; j > i; j--)
//         {
//             printf("*");
//         }
//         for (int j = 0; j < i * 2 - 2; j++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j < n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         for (int j = 1; j <= (2 * (n - 1) - (2 * i)); j++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int num, i, j;
//     scanf("%d", &num);
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 1; j <= num - i; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= 2*i+1; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2 * i - 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n * 2) - (2 * i + 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}