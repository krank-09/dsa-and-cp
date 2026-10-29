// TechSoc problem set: Melody.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,notes,note,numb=1;
    scanf("%d",&num);
//    printf("enter the notes : ");
//    scanf("%d",&note);
    for(int i=2;i<=num;i++){
        scanf("%d",&notes);
    for(int i=;i<=notes;i++){  
        for(int j=0;j<=notes;j++){  
        if(abs(i-j)==7 || abs(i-j)==5){
            numb=1;
        } else
            numb=0;
    }
    }
    }
    if(numb==1)
       printf("YES");
    else 
       printf("NO");
return 0;    
}