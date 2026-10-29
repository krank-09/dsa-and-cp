// Leap year with if-else.

#include<stdio.h>
int main(){
    int y;
    printf("enter year of choice : ");
    scanf("%d", &y);
    if(y%4==0){
        printf("%d is a leap year\n",y);
    } else
        printf("%d is not a leap year\n",y);
    if(y%400==0 && y%100==0){
        printf("%d is a century leap year\n",y);
    } else
        printf("%d is not a century leap year\n",y);
return 0;    
}