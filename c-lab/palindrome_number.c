// Check whether a number is a palindrome.

#include<stdio.h>
int main(){
    int num,orgnum,rev=0,r;
    printf("enter number : ");
    scanf("%d",&num);
    orgnum=num;
    for(int i=1;num!=0;num/=10){
        r=num%10;
        rev=rev*10+r;
    }
    if(orgnum==rev)
        printf("Palindrome");
    else
        printf("Not a palindrome");
return 0;
}