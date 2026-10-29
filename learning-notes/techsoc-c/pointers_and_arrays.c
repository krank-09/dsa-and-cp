// Pointers and array addresses (classwork, 22 Nov).

// #include<stdio.h>
// int main(){
//     int a=89;
//     // printf("%p\n",&a);
//     // printf("%d\n",*(&a));
//     // int ar[5]={1,2,3,4,5};
//     // int arr[0]={};
//     // int arra[3+2*4]={1,2,3,4,6,5,7,8};
//     // int array[printf("hello\n")];
//     // int arrr[sizeof(int)*2];
//     // int* p;
//     // p = &a;
//     // printf("%p\n",p);
//     // printf("%p\n",&a);
//     int *p = &a;
//     // printf("%d\n",*p);
//     // printf("%d\n",*a);
//     // & and * nullify each other
//     printf("%d\n",a);
//     printf("%d\n",p);
//     int **q = &p;
//     printf("%d\n",q);
//     printf("%d",&a);
//     printf("%d",&p);
//     printf("%d",&q);
//     printf("%d",*a);
//     printf("%d",*p);
//     printf("%d",*q);
//     printf("%d",*(&a));
//     printf("%d",*(&p));
//     printf("%d",*(&q));
//     printf("%d",**q);
//     printf("%d",&(*q));
// return 0;
// }
#include<stdio.h>
int main(){
int a=25;
int *p=&a;
int **q=&p;
printf("%d\n",a);
printf("%d\n",p);

printf("%d\n",q);
printf("%d\n",&a);
printf("%d\n",&p);
printf("%d\n",&q);
// printf("%d\n",*a);
printf("%d\n",*p);
printf("%d\n",*&q);
printf("%d\n",*&p);
printf("%d\n",*&q);
printf("%d\n",**q);
printf("%d\n",&*p);
}