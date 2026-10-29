// Fibonacci series.

//till output+add to print till the num of outputs
#include<stdio.h>
int main(){
    int num,i,first=0,second=1,next;
    printf("enter number : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        if(i<=1){
        printf("%d\t",i);

    }else{
        next=first+second;
        printf("%d\t",next);
        first=second;
        second=next;
    }
    }
return 0;    
}