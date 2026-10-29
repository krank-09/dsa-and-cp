// Class 7: C strings.

// // strings
// #include <iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char arr[] = {"hello"};
//     cout<<arr<<"\n";
//     cout<<arr+2<<"\n";
//     cout<<arr+4<<"\n";
// }

// length of string
// int main(){
//     char arr[] = {"hello everynyan"};
//     int count = 0 , k=0;
//         for (int i = 0; ; i++)
//         {
//         if(arr[i] == '\0'){
//             break;
//         }
//         count++;
//         }
//     cout<<count;
// }

// int main()
// {
//     char arr[] = "hello everynyan";
//     for (int i = 0; i < 15; i++)
//     {
//         cout << arr[i] << "\n";
//     }
//     cout << strlen(arr);
// }


// int main(){
//     char arr[40];
//     // scanf("%s", arr);
//     // cout<<arr<<"\n";
//     scanf("%[^\n]", arr);
//     printf("%s\n", arr);
//     //cout<<arr;
//     cout << "Normal output\n";
//     cout << arr;
// }


// int main(){
//     int num,ber;
//     cin>>num>>ber;
//     cout<<num+ber;
//     scanf("%d %d", &num, &ber);
//     printf("%d", num+ber);
//}


// int main(){
//     char arr[40];
//     scanf("%[^\n]", arr);
//     for(int i = 0 ; arr[i]!=0 ; i++){
//         cout<< *(arr + i) <<"\n";
//     }
// }


// int main(){
//     char arr[40];
//     scanf("%[^\n]", arr);
//     int index;
//     cin>>index;
//     char chara;
//     cin>>chara;
//     cout<<"Before changing : "<<arr<<"\n";
//     arr[index] = chara;
//     cout<<"After changing :  "<<arr;
// }

