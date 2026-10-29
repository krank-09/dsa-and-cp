// Class 3: pointers and arrays.

//pointers irrespective of the class(int pointer, char pointer) are of the same size
// * op has a higher precedence than + op
// array name is a pointer to the first element of the array
// array name is a constant pointer(a type of pointer that cannot be changed)
// normal numbers can be added to pointers  
// normal numers can be converted to hexadecimal forms by using the hex keyword
// arrays are stored linearly in memory
// 2d/3d array is a array of arrays


// #include<iostream>
// using namespace std;
// int main (){
//     int num;
//     cout<<"enter num : ";
//     cin>>num;
//     int *ptr = &num;
//     int **ptr1 = &ptr;
//     cout<<ptr<<" "<<ptr1<<"\n";
//     cout<<sizeof(ptr)<<" "<<sizeof(ptr1)<<endl;
//     cout<<num;
// }


// pointer to 2d array
// #include<iostream>
// using namespace std;
// void func(int (*arr)[3],int num){
//         int (*ptr)[3]= arr;
//         cout<<ptr;
//     }
// int main (){
//     int ar[2][3] = {1,2,3,4,5,6};
//     func(ar,2);
// }


//print the above function for a 3d array
// #include<iostream>
// using namespace std;
// void func(int (*arr)[3][3],int num){
//         int (*ptr)[3][3]= arr;
//         cout<<ptr;
//     }
// int main(){
//     int arrra[2][2][2]= {1,2,3,4,5,6,7,8};
//     func(arrra, 2);
// } 


// #include <iostream>
// using namespace std;
// void func(int (*arr)[2][2], int num) {
//     for (int i = 0; i < num; i++) {
//         for (int j = 0; j < 2; j++) {
//             for (int k = 0; k < 2; k++) 
//                 cout << arr[i][j][k] << " ";
//         }
//     }
// }
// int main() {
//     int ara[2][2][2] = {1,2,3,4,5,6,7,8};
//     func(ara, 2); 
// }
