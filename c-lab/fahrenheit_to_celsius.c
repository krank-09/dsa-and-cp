// Fahrenheit to Celsius.

#include<stdio.h>
int main(){
    float fahren,cel;
    printf("Fahrenheit : ");
    scanf("%f", &fahren);
    cel=(fahren-32)*5/9;
    printf("temp in celsius :%.2f",cel);
return 0;    
}
