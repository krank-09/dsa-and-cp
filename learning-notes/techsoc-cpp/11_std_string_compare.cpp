// Class 11: std::string and comparisons.

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
// int main(){
//     string s; getline(cin, s);
//     string s1; getline(cin, s1);
//     int diff;
//     for(int i = 0 ; i < s.size() && s1.size() ; i++){
//         if(s[i] != s1[i]){
//             diff = abs(s[i] - s1[i]);
//             break;
//         }
//     }
//     cout<<diff;
//     cout<<s.compare(s1);// a function for the same purpose
// }                       // compares the for the strings and returns >0 if s is greater ||  0 if both are equal ||  <0 if s1 is greater                 


// int main(){
    // string s; getline(cin, s);
    // string ans = s.substr(1,4);
    // cout<<ans;
    // string str;// string size not declared in advance , therefore the string will keep taking inputs until the end of the line
    // str[0] = 'a';
    // str[1] = 'b';
    // str[2] = 'c';
    // cout<<str;
    // string str;
    // str.push_back('a');
    // str.push_back('b');
    // str.push_back('c');
    // cout<<str<<"\n";
    // cout<<str[2]<<"\n";
    // str[3]='d'; // cant be done bcz the size of the string is 2 and we are trying to access the 3th index bcz the size is not initialized   
    // cout<<str;
// }

// differences between char ar and strings:
// 1. char ar is an array of characters while string is a class
// 2. char ar has no  additional operations while string has many operations like compare, length, substr, find, etc.
// 3. char ar , size has to be defined while string can be of any size
// 4. char ar has to be printed using loops while string can be printed using cout
// 5. char ar , we have to use cin.getline() while string can be taken using getline(cin, s) or cin>>s
// 6. char ar, have to provide null character at the end while string has it by default


// INBUILD FUNCTIONS IN STRING CLASS:
// 1. compare() : compares two strings and returns >0 if s is greater ||  0 if both are equal ||  <0 if s1 is greater   
// 2. length() : returns the length of the string
// 3. substr() : returns the substring of the string :: str.substr(starting_index, length) :: default value for the length of the string is the end of the string :: included in <string>
// 4. find() : returns the index of the first occurence of the substring :: returns npos if no substring found whos value is defined as -1 :: can be accessed as str :: npos
// 5. erase() : erases the substring from the string :: str.erase(starting_index, length) :: default value for the length of the string is the end of the string :: 
// 6. insert() : inserts the substring in the string
// 7. replace() : replaces the substring with another substring
// 8. push_back() : adds a character at the end of the string
// 9. pop_back() : removes the character from the end of the string
// 10. clear() : clears the string
// 11. empty() : returns true if the string is empty
// 12. resize() : resizes the string :: s.resize(10) :: if the size is increased then the new characters will be null characters
// 13. swap() : swaps the strings
// 14. c_str() : returns the c style string
// 15. at() : returns the character at the given index
// 16. front() : returns the first character
// 17. back() : returns the last character
// 18. begin() : returns the iterator to the beginning
// 19. end() : returns the iterator to the end
// 20. rbegin() : returns the reverse iterator to the beginning
// 21. rend() : returns the reverse iterator to the end
// 22. copy() : copies the string to the character array
// 23. operator[] : returns the character at the given index
// 24. getline() : takes the string
// 25. reverse() : reverses the string :: reverse(s.begin(), s.end()) :: included in <algorithm>
// 26. to_string() : converts the number to string
// 27. stoi() : converts the string to integer  
// 28. stof() : converts the string to float
// 29. stod() : converts the string to double
// 30. stoll() : converts the string to long long
// 31. stoul() : converts the string to unsigned long
// 32. stoull() : converts the string to unsigned long long
// 33. tolower() : converts the string to lower case
// 34. toupper() : converts the string to upper case
// 35. strcat() : concatenates the strings :: strcat(s1, s2) :: s1 should have the required space to store the concatenated string :: arguments should be char ar not strings
// 36. strcpy() : copies the string 