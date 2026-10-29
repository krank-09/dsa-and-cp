// Sum of the perfect numbers in a range.

//print sum of perfect numnbrs in a range
#include<stdio.h>
int main(){
    int a,b,add=0,count=0;
    scanf("%d%d",&a,&b);
    for(int j=a;j<b;j++){
        int sum=0;  
    for (int i=1;i<=j/2;i++)
    {
        if(j%i==0){
            sum+=i;
        }else
            continue;
    }
    if (sum==j)
    {
        add+=j;
        count+=1;
    }else
        continue;
    }
    printf("%d",count); 
return 0;    
}