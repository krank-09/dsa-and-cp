// Patterns (classwork, 15 Nov).

#include <stdio.h>
int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n+1-i; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             if (i == 1 || i == n|| j == 1 || j ==2*i-1 )
//             {
//                 printf("*");
//             }
        
//         else 
//         {
//                 printf(" ");
//         }
//     }
//     printf("\n");
//     }
//     return 0;
// }
// {
//     int n; scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {   for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for (int j = 1; j <=2*(n-i+1)-1; j++)
//         {
//             if(i==1||i==n||j==1||j==2*(n-i+1)-1)
//                 printf("*");
//         else 
//             printf(" ");
//         }
//     printf("\n");
//     }
// return 0;
// }
// {
//     int n; scanf("%d", &n);
//     int spa=n-1;
//     int sta=1;
//    for (int i = 1; i <= 2*n-1; i++)
//     {
//         for(int j=1;j<=spa;j++){
//             printf(" ");
//         }
//             if(i<=n-1){
//                 spa--;
//             }else{
//                 spa++;
//             }
//         for (int j = 1; j <=sta;j++ ){
//             if(i==1||j==1||j==sta)
//                 printf("*");
//             else 
//                 printf(" ");
//         }
//         if(i<=n-1){
//             sta+=2;
//         }else{
//             sta-=2;
//         }
//     printf("\n");
//     }
// return 0;
// }
{
    int n; scanf("%d", &n);
    int spa=0;
    int sta=2*n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=spa;j++){
            printf(" ");
        }
        if(i<=n-1){
            spa++;}
        else{
            spa--;}
        
        for(int j=1;j<=sta;j++){
            printf("*");
        }
        if(i<=n-1)
            sta-=2;
        else 
            sta+=2;
        printf("\n");
    }
return 0;
}
