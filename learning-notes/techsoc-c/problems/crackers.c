// TechSoc problem set: Crackers.

#include<stdio.h>
#define TechSoc main
int TechSoc(){
    int i=1,k,n,w,price=0;
    scanf("%d %d %d",&k,&n,&w);
    while(i<=w){
        price+=k*i;
        i++;
    }
    if(n>price){
        printf("0");
    } else{
        printf("\n%d",(price-n));
    }
return 0;    
}