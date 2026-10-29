// Sum of the strong numbers in a range.

//print the sum of strong numbers
#include<stdio.h>
int main(){
    int a,b,tsum=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int onum=i,sum=0;
        while(onum>0)
        {   int fac=1;
            int dig=onum%10;
            for(int j=1;j<=dig;j++){
                fac*=j;
            }
            sum+=fac;
            onum/=10;
        }
        if(sum==i){
            tsum+=i;
        }
    }
    printf("%d",tsum);
return 0;
}
