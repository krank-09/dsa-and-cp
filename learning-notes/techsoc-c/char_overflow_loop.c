// Loop over a char that wraps around (char overflow).

// infinite bcz the +=2 bypasses 0 i.e 1+2=3 same way 255+2=1(char cyclic property)
#include<stdio.h>
int main(){
    int count=0;
    char i=1;
    for(;i;i+=2){
        printf("Hello");
        count++;
    }
    printf("\n%d",count);
return 0;    
}