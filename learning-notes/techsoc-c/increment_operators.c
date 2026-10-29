// Prefix vs postfix increment.

#include <stdio.h>
// int main() {
//     int a = 5, b = 10 ,prefix, postfix;
//     prefix = ++a;
//     postfix = b++;
//     printf("Initial Value: a = 5, b = 5\n");
//     printf("After Prefix Increment: a = %d, prefix = %d\n", a, prefix);
//     // printf("After Prefix Increment: a = %d\n", a);
//     printf("After Postfix Increment: b = %d, postfix = %d\n", b, postfix);
//     int largest = (a<b)?b:a;
//     printf("%d\n",largest);
//     return 0;
// }
// int main(){
//     int a,b,SUM;
//     scanf("%d %d",&a,&b);
//     SUM = a+b;
//     printf("SUM IS %d\n",SUM);
//     return 0;
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         printf("HELLO WORLD\n");
//     }
//     return 0;
// }
// int main(){

    // for(int n=1;n<=4;n++){
    // for(int m=1;m<=4;m++){
    //     printf("*");
    //     }
    //     printf("\n");
//     }
// return 0;
// }

int main(){
    for(int n=0;n<4;n++){
    for(int m=n;m<4;m++){
        printf("*");
        }
        printf("\n");
}
return 0;
}