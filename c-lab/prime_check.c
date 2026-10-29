// Prime check.

#include<stdio.h>
int main(){
    int num,prime=1;
    printf("enter number to check : ");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0)
            prime=0;
        else
            continue;    
    }
    if(prime)
        printf("Prime Number");
    else
        printf("Not a prime number");        
}