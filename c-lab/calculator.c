// Calculator with switch.

#include<stdio.h>
int main(){
    char op;
    int result,num1,num2;
    printf("enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Select your operator(+,-,/,*,%%) : ");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        result=num1+num2;
        printf("Sum => %d + %d = %d",num1,num2,result);
        break;
    case '-':
        result=num1-num2;
        printf("Difference => %d - %d = %d",num1,num2,result);
        break;
    case '*':
        result=num1*num2;
        printf("Product => %d * %d = %d",num1,num2,result);
        break;
    case '/':
        if(num2==0)
           printf("the number can't be divided by 0");
        else{
           result=num1/num2;
           printf("Quotient => %d / %d = %d",num1,num2,result);
        }
        break;   
    case '%':
    result=num1%num2;
    printf("Remainder => %d %% %d = %d",num1,num2,result);
    break;  

    default:
        printf("invalid choice");
    }
return 0;
}