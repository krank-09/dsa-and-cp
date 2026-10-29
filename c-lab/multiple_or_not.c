// Check whether one number is a multiple of another.

#include<stdio.h>
int main(){
    int m,n;
    printf("enter number : ");
    scanf("%d",&m);
    printf("enter number to check divisibility : ");
    scanf("%d",&n);
    if(m%n==0)
       printf("%d is divisible by %d",m,n);
    else
       printf("%d is not divisible by %d",m,n);
return 0; 
}