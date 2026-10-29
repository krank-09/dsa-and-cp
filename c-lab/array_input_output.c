// Read and print a 1D array.

//inpput elements in a 1D array and print them
#include<stdio.h>
int main(){
    int n; 
    printf("enter num of elements for array : ");
    scanf("%d",&n);
    int ar[n];
    printf("enter the elements in the array \n");
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element : ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("the elements of the array are :\n");
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
return 0;    
}