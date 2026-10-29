// Count digits with a function.

#include<stdio.h>
int n;
int num(int n){
    int c=0;
    for(int i=0;n!=0;n/=10){
        c++;
    }
return c;
}
int main(){
    scanf("%d",&n);
    printf("num of digits :%d",num(n));
return 0;
}