// Class 8: counting vowels, letters, digits and spaces.

#include <iostream>
#include <cstring>
using namespace std;
void isVowel(char arr[])
{
    int count = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
            count++;
    }
    cout << count;
}
void isCount(char arr[])
{
    int a = 0, d = 0, s = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
            a++;
        else if (arr[i] >= '0' && arr[i] <= '9')
            d++;
        else
            s++;
    }
    cout << "alphabets = " << a << " digits = " << d << " special characters = " << s;
}

// int main()
// {
//     char arr[50];
//     scanf("%[^\n]", arr);
//     char chara;
//     cin >> chara;
//     int count = 0;
//     for (int i = 0; i < strlen(arr); i++)
//     {
//         if (arr[i] == chara)
//             count++;
//         else
//             continue;
//     }
//     cout << count;
// }

// int main()
// {
//     char arr[50];
//     scanf("%[^\n]", arr);
//     int count = 0;
//     for (int i = 0; i < strlen(arr) - 1; i++)
//     {
//         if (arr[i] == ' ' && arr[i + 1] != ' ')
//         {
//             if (arr[i] == ' ')
//                 count++;
//             else
//                 continue;
//         }
//     }
//     cout << count + 1;
// }

// int main()
// {
//     char arr[50];
//     scanf("%[^\n]", arr);
//     int len = strlen(arr); // will reduce the time taken to calculate the length of the string everytime the strlen in compiled
//     for (int i = 0; i < len / 2; i++)
//     {
//         char t = arr[i]; // create a temp variable to store the value of the first element i.e to be later swapped with the last element
//         arr[i] = arr[len - i - 1];
//         arr[len - i - 1] = t;
//     }
//     cout << arr;
// }

// int main(){
//     char arr[50];
//     scanf("%[^\n]", arr);
//     int len = strlen(arr);
//     isVowel(arr);
// }

// give output as num of alphabets , digits and special characters in the string
// int main()
// {
//     char arr[50];
//     scanf("%[^\n]", arr);
//     int len = strlen(arr);
//     isCount(arr);
// }