// TechSoc problem set: Diwali Over.

#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        if(n%2==0){
            printf("0");
        } else {
            int ev=0;
            while(n>9){
                int a=n%10;
                if(a%2==0){
                    a++;
                    n/=10;
                }
            }
            if(n%2==0)
            printf("1");
            else if(ev>0)
            printf("2");
            else
            printf("-1");
        }

    }

return 0;
}