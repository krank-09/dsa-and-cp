// Area and circumference of a circle.

#include<stdio.h>
#define PI 3.14
int main(){
    float r,area,circum;
    printf("Radius=");
    scanf("%f", &r);
    area=r*r*PI;
    circum=2*PI*r;
    printf("area of circle:%.2f\ncircumference of circle:%.2f",area,circum);
return 0;    
}