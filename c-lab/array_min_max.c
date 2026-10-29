// Smallest and largest element of an array.

#include<stdio.h>
int main(){
    int n;
    printf("enter the num of elements in an array : ");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++){
        printf("enter element num %d : ",i+1);
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    int min=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        if(ar[i]<min){
            min=ar[i];
        }
    }
    printf("the max. element : %d\n",max);
    printf("the min. element : %d\n",min);
return 0;
}