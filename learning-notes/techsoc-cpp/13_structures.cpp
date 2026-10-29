// Class 13: structures.

// structures
// :: scope resolution operator
// . member access operator / dot operator
// member variable default value : int/double/float = 0, string = ""(null operator)

//declaring globally will give the values of the member values as 0 or null(in case of string) 
// if declared locally then the values will be garbage values 
#include<iostream>
using namespace std;
// struct s{
//     int a;
//     double b;
//     string c;
// }s1;
// int main(){
//     // struct s s1;
//     // s1.a = 10;
//     // s1.b = 20.5;
//     // s1.c = "hello";
//     // s1={"hello",10,20.01}; // the values have to be in order as declared in the structure
//     struct s s1 = {10, 20.5, "hello"}; 
//     cout<<s1.a<<" "<<s1.b<<" "<<s1.c;
// }


// struct stu{
//     int swap(int a, int b){
//         int temp = a;
//         a = b;
//         b = temp;
//         return a;
//     }
// };
// int main(){
//     struct stu s1;
//     int a = 10, b = 20;
//     cout<<"a = "<<s1.swap(a,b) << '\n';
//     cout << a << '\n';
// }
// pointer to structure 