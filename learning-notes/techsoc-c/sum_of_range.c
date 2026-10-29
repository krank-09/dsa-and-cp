// Sum of the numbers in a range.

//print sum of numbers in a range
#include<stdio.h>
int main(){
    int sum=0,a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    printf("%d",sum);
return 0;
}