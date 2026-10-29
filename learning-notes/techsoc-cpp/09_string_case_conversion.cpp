// Class 9: case conversion.

#include <iostream>
#include <cstring>
using namespace std;

// int main()
// {
//     char arr[50];
//     scanf("%[^\n]", arr);
//     int len = strlen(arr);
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i] >= 'a' || arr[i] <= 'z')
//             arr[i] = arr[i] - 32;
//     }
//     cout << arr;
// }


// length of string
// int main()
// {
//     int count = 0, count1 = 0;
//     char arr[] = {};
//     scanf("%[^\n]", arr);
//     int len = strlen(arr);
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i] >= 0 && arr[i] <= 127)
//             count++;
//         if (arr[i] == ' ')
//             count--;
//     }
//     char ar[] = {};
//     scanf("%[^\n]", ar);
//     int leng = strlen(ar);
//     for (int i = 0; i < leng; i++)
//     {
//         if (ar[i] >= 0 && ar[i] <= 127)
//             count1++;
//         if (ar[i] == ' ')
//             count1--;
//     }
//     string arraa = strcat(arr, ar);
//     cout << count << " " << count1 << "\n" << arraa;
// }


// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int len = s.size(s);
//         for (int i = 0; i < len; i++) {
//             if (ar[i] >= 'A' && ar[i] <= 'Z')
//                 ar[i] = ar[i] + 32;
// //            if (ar[i] >= '0' && ar <= '9' || ar[i] >= 'A' && ar[i] <= 'Z' || ar[i] >= 'a' && ar[i] <= 'z')     
//         }
//     }
// };