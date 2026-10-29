// Class 2: addresses, arrays and the dereference operator.

// #include<iostream>
// using namespace std;
// int main(){
//     unsigned ar[5]={1,2,3,4,5};
//     cout<<&ar[0];
//     cout<<endl;
//     cout<<&ar[0]+1;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int ar[2][3]={1,2,3,4,5,6};
// printf("%u",ar);
// printf("\n");printf("%u",ar+1);
// }


// deferencing op(*) 
// will refer to the address after the +1 to the address is done


// #include<iostream>
// using namespace std;
// int main(){
// int ar[2][3]={1,2,3,4,5,6};
// printf("%u",**ar);
// printf("\n");printf("%u",**(ar+1));
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num,even=0,odd=0;
//     cout<<"enter num of array elements :";
//     cin>>num;
//     int ar[num];
//     for(int i=0;i<num;i++){
//         cout<<"enter the array element "<<i+1<<":";
//         cin>>ar[i];
//     }
//     for(int i=0;i<num;i++){
//         if(ar[i]%2==0)
//             even+=1;
//         else
//             odd+=1;
//         }
//     cout<<"even numbers are"<<even;
//     cout<<endl;
//     cout<<"odd numbers are"<<odd;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2,n3,even=0,odd=0;
//     cout<<"enter num of array elements :";
//     cin>>n1>>n2>>n3;
//     int ar[n1][n2][n3];
//         for(int j=0;j<n1;j++){
//             for(int k=0;k<n2;k++){
//                 for(int l=0;l<n3;l++){
//                     cout<<"enter the array element "<<"["<<j+1<<","<<k+1<<","<<l+1<<"]"<<":";
//                     cin>>ar[j][k][l];
//                 }
//             }
//         }
//         for(int j=0;j<n1;j++){
//             for(int k=0;k<n2;k++){
//                 for(int l=0;l<n3;l++){
//         if(ar[j][k][l]%2==0)
//             even+=1;
//         else
//             odd+=1;
//             }
//         }
//     }
//     cout<<"even numbers are"<<even;
//     cout<<endl;
//     cout<<"odd numbers are"<<odd;
// }


// print the highest frequency of elements in an array
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the number of elements in the array: ";
//     cin >> num;
//     int ar[num]; 
//     for (int i = 0; i < num; i++) {
//         cout << "Enter the array element " << i + 1 << ": ";
//         cin >> ar[i];
//     }
//     int max = 0, melement = ar[0];
//     for (int i = 0; i < num; i++) {
//         if (ar[i] == -1) 
//             continue;
//         int count = 1;
//         for (int j = i + 1; j < num; j++) {
//             if (ar[i] == ar[j]) {
//                 count++;
//                 ar[j] = -1; 
//             }
//         }
//         if (count > max) {
//             max = count;
//             melement = ar[i];
//         }
//     }
//     cout << "element with highest frequency is: " << melement << " (occurs " << max << " times)";
//}


//to check if the array is sorted whether ascending or descending
// #include<iostream>
// int main(){
//     int num;
//     cout<<"enter array num : ";
//     cin>>num;
//     int ar[num];
//     for(int i=0;i<num;i++){
//         cout<<"enter the array element "<<i+1<<":";
//         cin>>ar[i];
//     }
//     for(int i =0;i<num;i+1){
//         if(ar[i]<ar[i+1]){
//             cout<<"array is in ascending order";
//             break;
//         }
//         else if(ar[i]>ar[i+1]){
//             cout<<"array is in descending order";
//             break;
//         }
//         else{
//             cout<<"array is not sorted";
//             break;
//         }
//     }
// }