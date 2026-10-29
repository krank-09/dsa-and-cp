// Class 1: input/output and loops.

// #include<iostream> 
// #include<string> 
// using namespace std;
// int main (){
//     cout<<"enter your name : ";
//     string name;
//     cin>>name;
//     cout<<"Hello,"<<name;
//     return 0;
//     }


// #include<iostream>
// using namespace std;
// int main(){
//     int n1,sum=0;
//     cout<<"Enter number: ";
//     cin>>n1;
//     for (int i=1;i<=n1;i++){
//         sum+=i;
//     }
//     cout<<"Sum is :"<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int n1;
//     cout<<"Enter number : ";
//     cin>>n1;
//     int ar[n1];
//     for(int i=0;i<n1;i++){
//         cin>>ar[i];
//     }
//     for (int i=0;i<n1;i++){
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//     ar[3]=11;
//     for (int i=0;i<n1;i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }


//print an array with n size with values 1 to n+1 with 1 value missing, find the missing value
// 2 ways to solve this problem
// 1) using sum of n natural numbers and sum of array elements
// 2) build a different array with n+1 size and values 1 to n+1 and compare with the given array and keep changing values of the array to 1 
#include<iostream>
using namespace std;
int main (){
    int n1;
    cout<<"Enter numbers : ";
    cin>>n1;
    int ar[n1];
    for(int i=1;i<+n1+1;i++){
        cin>>ar[i];
    }
    int arr[n1];
    for (int i=1;i<=n1;i++){
        if(ar[i]==i)
            arr[i]=ar[i];
        else
            arr[i]=1;
    }
    for(int i=1;i<=n1;i++){
    if(arr[i]!=i)
        continue;
    else
        cout<<i;
    }
}


//find the third largest element in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"Enter number : ";
//     cin>>n1;
//     int ar[n1];
//     for(int i=0;i<n1;i++){
//         cin>>ar[i];
//     }
//     for (int i=0;i<n1;i++){
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//     int max1=ar[0];
//     int max2=ar[0];
//     int max3=ar[0];
//     for (int i=0;i<n1;i++){
//         if (ar[i]>max1){
//             max3=max2;
//             max2=max1;
//             max1=ar[i];
//         }
//         else if (ar[i]>max2){
//             max3=max2;
//             max2=ar[i];
//         }
//         else if (ar[i]>max3){
//             max3=ar[i];
//         }
//     }
//     cout<<"Third largest element is :"<<max3;
// }


// find the sum of the all the elements in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"Enter number : ";
//     cin>>n1;
//     int ar[n1];
//     for(int i=0;i<n1;i++){
//         cin>>ar[i];
//     }
//     for (int i=0;i<n1;i++){
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//     int sum=0;
//     for (int i=0;i<n1;i++){
//         sum+=ar[i];
//     }
//     cout<<"Sum of the elements is :"<<sum;
// }