// Class 4: multidimensional arrays as pointers.

// a multi-dimensional array is a sub-array of more arrays
// representation of array as pointer
// in array        // arr[i]= *(arr+i)
// in 2d array    // arr[i][j]= *(*(arr+i)+j)
// in 3d array   // arr[i][j][k]= *(*(*(arr+i)+j)+k)
// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5] = {1,2,3,4,5};
//     int (*p)[5] = &arr;
//     int *po = &arr[0]; 
//     cout<<p<<endl;
//     cout<<po;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5] = {1,2,3,4,5};
//     int (*p)[5] = &arr;
//     int *po = &arr[0]; 
//     printf("%u\n",p);
//     printf("%u\n",p+1);
//     printf("%u\n",po);
//     printf("%u",po+1);
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int ara[4]={1,2,3,4};
//     int *po = ara;
//     int ar[2][2]={1,2,3,4};
//     int (*p)[2] = ar;
//     printf("%u\n",po);
//     printf("%u",p);
// }

// using pointer form
// #include<iostream>
// using namespace std;
// void func(int (*ara)[2],int siz){
//     for(int i=0; i<siz; i++){
//         for(int j=0; j<2; j++){
//             cout<<*(*(ara+i)+j)<<" ";
//         }    
//         cout<<endl;
//     }
// }
// int main(){
//     int ar[2][2]={1,2,3,4};
//     func(ar,2);
// }
// using array form
// // bad practice to enter the 1st dimension's size when passing through function
// #include<iostream>
// using namespace std;
// void func(int ara[][2],int siz){
//     cout << sizeof(ara) << endl;
//     for(int i=0; i<siz; i++){
//         for(int j=0; j<2; j++){
//             cout<<ara[i][j] <<" ";
//         }    
//         cout<<endl;
//     }
// }
// int main(){
//     int ar[3][2]={1,2,3,4, 5, 6};
//     func(ar,3);
// }


// int address is divisible by 4(size of int)
// double address is divisible by 8(size of double)
// char address is divisible by 1(size of char)
// it is done to make the access of the data faster and more efficient processing
#include<iostream>
using namespace std;
int main(){
    double *p;
    char *po;
    int *poi;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(po)<<endl;
    cout<<sizeof(poi)<<endl;
    printf("%u\n",p);
    printf("%u\n",po);
    printf("%u",poi);    
}