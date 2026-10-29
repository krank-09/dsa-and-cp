// Swap two numbers using a temporary variable.

#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("numbers :");
    scanf("%d %d",&num1,&num2);
    printf("before swapping: num1 = %d\tnum2 = %d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swapping: num1 = %d\tnum2 = %d",num1,num2);
return 0;    
} 