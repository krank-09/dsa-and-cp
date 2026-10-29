// Sum of the digits of a four-digit number.

#include<stdio.h>
int main(){
    int orgnum,num,r,sum=0;
    orgnum=num;
    printf("enter a four digit number : ");
    scanf("%d",&num);
     r=num%10;
     sum+=r;
     num/=10;
     r=num%10;
     sum+=r;
     num/=10;
     r=num%10;
     sum+=r;
     num/=10;
     r=num%10;
     sum+=r;
    printf("the sum of the number is %d",sum);
return 0;
}