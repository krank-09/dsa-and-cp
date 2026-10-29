// GCD by trial division.

#include<stdio.h>
int gcd(int a,int b){
    int gcd;
    for(int i =1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main (){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("%d",gcd(n1,n2));
    return 0;
}