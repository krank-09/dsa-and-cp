// Roots of a quadratic equation.

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,discriminant,root1,root2;
    printf("enter coefficient of a : ");
    scanf("%d", &a);
    printf("enter coefficient of b : ");
    scanf("%d", &b);
    printf("enter value of c : ");
    scanf("%d", &c);
   discriminant=b*b-4*a*c;
    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/2*a;
        root2=(-b-sqrt(discriminant))/2*a;
        printf("roots are real and distinct.\n");
        printf("root1=%d\nroot2=%d",root1,root2);
    } else if(discriminant==0){
        root1=(-b/(2*a));
        printf("roots are equal and real\nroots=%d\n",root1);
    } else
        printf("roots are imaginary");
return 0;        
}