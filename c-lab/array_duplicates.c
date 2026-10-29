// Find duplicate elements in an array.

#include<stdio.h>
int main(){
    int n;
    printf("enter the num of elements in an array : ");
    scanf("%d",&n);
    int ar[n];
    printf("the elements of the array are :\n");
    for(int i=0;i<n;i++){
        printf("enter element num %d : ",i+1);
        scanf("%d",&ar[i]);
    }
    int dupli=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ar[i]==ar[j]){
            printf("the duplicate element :%d",ar[i]);
            dupli=1;
            break;
        }
        }
    }
    if(!dupli){
        printf("\nno duplicates found");
    }
return 0;
}