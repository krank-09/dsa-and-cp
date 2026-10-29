// Swap by value: the swap inside the function doesn't reach main.

#include <stdio.h>


void swap(int a,int b){
  int c;
  c=a+b;
  b=c-b;
  a=c-a;
  }
  
  


int main()
{
  int a=6;
 int  b=7;
  printf("before swappint a is %d and b is %d\n",a,b);
  swap(a,b);
  printf("after swappint a is %d and b is %d\n",a,b);  
  printf("%d nad %d",a,b);
}