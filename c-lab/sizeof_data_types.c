// Sizes of the basic data types.

#include<stdio.h>
int main(){
    int i;
    char ch;
    float f;
    double d;
    printf("Size of integer : %lu bytes\n",sizeof(i));
    printf("Size of characters : %lu bytes\n",sizeof(ch));
    printf("Size of float : %lu bytes\n",sizeof(f));
    printf("Size of double : %lu bytes",sizeof(d));
return 0;
}