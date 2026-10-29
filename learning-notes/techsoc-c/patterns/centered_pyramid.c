// Centered pyramid.

// #include<stdio.h>
// int main(){
//     int n; scanf("%d",&n);
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//         for(int j=0;j<2*i+1;j++){
//             printf("*");
        
//         }
//         printf("\n");
//     }
// return 0;
// }
#include<stdio.h>
void swap(int a,int b ){
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping :\na=%d\tb=%d\n",a,b);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before swapping :\na=%d\tb=%d\n",a,b);
    swap(a,b);
return 0;
}
