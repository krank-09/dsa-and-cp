// Swap with pointers (call by reference).

// call by reference
#include<stdio.h>
void swap(int *c, int *d){
    int temp= *c;
    *c= *d;
    *d= temp;
}
int main(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("before swapping :\na=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping :\na=%d\tb=%d",a,b);

return 0; 
}