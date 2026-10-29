// Prime check in a function.

#include<stdio.h>
int prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }           
    }
    return 1;
}    
int main(){
    int n;
    printf("enter number to check :");
    scanf("%d",&n);
    if(prime(n))
        printf("1");
    else 
        printf("0");    
return 0;    
}
