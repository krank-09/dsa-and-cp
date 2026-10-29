// Class 6, part 2: digit problems.

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long  n1;
//     cout << "Enter a number : ";
//     cin >> n1;
//     int ara[10]={0};
//     int flag = 0;
//         while (n1 > 0)
//         {
//             int temp = n1%10;
//             ara[temp] = 1;
//             n1 /= 10;
//         }
//     for (int i = 0; i < 10; i++)
//     {
//         // cout<<ara[i]<<endl;
//         if (ara[i] == 0)
//         {
//             cout << "NO";
//             break;
//         }
//     }
//     if(flag)
//         cout << "YES";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0,count=0;
//     cin>>n;
//     int ar[n];
//     cout<<"Enter elements of array : ";
//     for(int i=0;i<n;i++){
//         cin>>ar[i];
//     }
//     for(int i=0;i<n;i++){
//         if(ar[i]%2==0){
//             sum+=ar[i];
//             count++;
//             cout<<" "<<sum<<"";
//         }
//         else{
//             sum+=ar[i];
//             count+=2;
//             sum*=2;
//         cout<<" "<<sum<<" ";

//         }                     

// }
//     cout<<sum<<"\n";
//     cout<<count;
// }
