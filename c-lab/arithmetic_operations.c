// Sum, difference, product, quotient and remainder of two numbers.

#include<stdio.h>
int main(){
    int num1,num2;
    int sum,sub,multi,divi,remain;

    printf("enter the numbers : ");
    scanf("%d %d", &num1,&num2);
    
    sum=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    divi=num1/num2;
    remain=num1%num2;

    if(num2==0){
        printf("num2 can't be zero\n");
    } else
       printf("quotient = %d/%d=%d\n",num1,num2,divi);
    printf("sum = %d + %d = %d\ndifference = %d - %d = %d\nproduct = %d * %d = %d\nremainder = %d %% %d = %d",num1,num2,sum,num1,num2,sub,num1,num2,multi,num1,num2,remain);
    return 0;
}
