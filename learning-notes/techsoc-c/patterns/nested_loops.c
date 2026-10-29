// Nested loop patterns.

// #include<stdio.h>
// int main(){
//     int num; scanf("%d",&num);
//     for(int i=0;i<num;i++){
//         for(int j=0;j<i+1;j++){
//             printf("*");
//         }
//     printf("\n");
//     }
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int num,i; scanf("%d",&num);
//     for(int i=0;i<num;i++){
//         for(int j=1;j<=num-i;j++){
//             printf(" ");
//         }
//         for(int j=0;j<=i;j++){
//             printf("* ");
//     }
//     printf("\n");
//     }
// return 0;

// }
#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("*");
        for(int a=0;a<i;a++){
            printf("*");
        }
        for(int j=i;j<=i+3;j++){
            printf(" ");
        }
        for(int a=0;a<n;a++){
            printf("*");
        }

    printf("\n");
    }
return 0;
}
