// Leap year with the ternary operator.

#include<stdio.h>
int main(){
    int year;
    printf("enter year of choice : ");
    scanf("%d", &year);
    (year%4==0)?printf("%d is a leap year\n",year):(year%400==0 && year%100==0)?printf("%d is a century leap year\n",year):printf("%d is not a century leap year\n",year);
return 0;    
}