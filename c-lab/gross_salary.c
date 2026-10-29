// Gross salary from basic pay and allowances.

#include<stdio.h>
int main(){
    float basic,hra,da,ta,taxdeduc,gross;
    printf("enter basic salary : ");
    scanf("%f", &basic);
    hra=0.05*basic;
    da=0.02*basic;
    ta=0.03*basic;
    taxdeduc=0.03*basic;
    gross=basic+ta+da+hra-taxdeduc;
    printf("the gross salary is : %.2f ",gross);
return 0;    
}