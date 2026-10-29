// Class 10: inserting and deleting characters.

#include <iostream>
#include <string>
using namespace std;
// int main(){
//     char a[100],chara;
//     scanf("%[^\n]",a);
//     int index ; cin>> index;
//     cin>>chara;
//     int len = strlen(a);
//     for(int i = len+1 ; i > index ; i--){
//         a[i] = a[i-1];
//     }
//     a[index]=chara;
//     cout<<a;
// }

// int main()
// {
//     char a[100];
//     scanf("%[^\n]", a); 
//     getchar();
//     int len = strlen(a);
//     int flag = 0,j=0;
//     char ar[100];
//     scanf("%[^\n]", ar);
//     getchar();
//     int leng = strlen(ar);
//     for (int i = 0; i < len; i++)
//     {   
//         if(a[i] != ar[j]){
//             // j++;
//         }
//         else{
//                 for(int i = 0 ; i < leng ; i++){
//                     if(ar[j] == a[i]){
//                         flag = 0;
//                         j++;
//                     }
//                     else{
//                         flag = 1;
//                         j++;
//                     }
//                 }
//         }
//     }
//     if(flag == 1)
//         cout<<"NO";
//     else
//         cout<<"YES";
// }


// iclass Solution {
// public:
//     int strStr(string haystack, string needle) {
//         char a[10000]; scanf("%[^\n]", a); getchar(); int len = strlen(a); int flag = 0,j=0;
//         char ar[10000]; scanf("%[^\n]", ar); getchar(); int leng = strlen(ar);
//         for(int i = 0 ; i < len ; i++){
//             if(a[i]== ar[j]){
//                 for(int k = i ; k < leng ; k++){
//                     if(ar[j] == a[k]){
//                         flag = 0;
//                         j++;
//                     }
//                     else{
//                         flag = 1;
//                         j++;
//                     }
//                 }
//             }
//         }
//     if(flag==0)
//         return 0;
//     else 
//         return -1;
//     }    
    
// };