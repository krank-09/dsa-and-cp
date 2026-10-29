// Sorting algorithms chosen from a menu.

#include<stdio.h>
int main(){
    int sort,num;
    printf("enter the num of elements in array : ");
    scanf("%d",&num);
    int ar[num];
    printf("enter the elements :\n");
    for(int i=0;i<num;i++){
        printf("element no %d : ",i+1);
        scanf("%d",&ar[i]);
    }
    while(1){
        printf("\nMenu:\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &sort);
        switch(sort){
            case 1 :
                for(int i =0;i<num-1;i++){
                    for(int j=0;j<num-i-1;j++){
                        if(ar[j]>ar[j+1]){
                            int temp=ar[j];
                            ar[j]=ar[j+1];
                            ar[j+1]=temp;
                        }
                    }
                }
                printf("after bubble sort:\n");
                for(int i=0;i<num;i++){
                    printf("%d ",ar[i]);
                }
                printf("\n");
                break;
            case 2 :
                for (int i = 1; i < num; i++)
                {
                    int a=ar[i];
                    int j=i-1;
                    while(j>=0 && ar[j]>a){
                        ar[j+1]=ar[j];
                        j-=1;
                    }
                ar[j+1]=a;
                }
                printf("after insertion sort :\n");
                for(int i=0;i<num;i++){
                    printf("%d ",ar[i]);
                }
                printf("\n");
                break;
            case 3 :
                for(int i=0;i<num-1;i++){
                    int min=i;
                    for(int j=i+1;j<num;j++){
                        if(ar[j]<ar[min])
                            min=j;
                    }
                    int temp=ar[min];
                    ar[min]=ar[i];
                    ar[i]=temp;
                }
                printf("after selection sort :\n");
                for(int i=0;i<num;i++){
                    printf("%d ",ar[i]);
                }
                printf("\n");
                break;
        case 4 :
            printf("the program ended\n");
            return 0;
        default :
            printf("invalid input\n");
        }
    }
return 0;
}