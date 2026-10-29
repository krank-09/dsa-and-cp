// Class 6: memory layout, void and dangling pointers, references.

//  * Topics covered:
//  * - Pointer syntax and arithmetic
//  * - Memory allocation (stack, heap, static/global variables, code segment)
//  * - Void pointers
//  * - Uses of pointers (dynamic memory allocation, arrays, functions, data structures, file handling, pointers to functions)
//  * - Dangling pointers and how to avoid them
//  * - Pass by value vs. pass by reference
//  * - Demerits of pointers (memory leak, dangling pointers, wild pointers, uninitialized pointers, memory corruption, array out of bound access, memory fragmentation)
//  * 
//  * References:
//  * - References are used to reduce memory usage.
//  * - References are used to pass values to functions efficiently.
//  * - No pointer arithmetic is applicable on references.
//  * 
//  * Syntax:
//  * int &ref = var; // 'ref' is a reference to 'var'
//  * 
//  * Example:
//  * int a = 10;
//  * int &b = a; // 'b' is a reference to 'a'
//  * b = 20; // modifies 'a' through 'b


// to do list
// 1. write notes from vs code for c++
// 2. write journals
// 3. implement the class code from copy in vs code
// 4. do git push for all the codes on this laptop by creating documentation by copilot


// topics covered till now
// pointer syntax
// pointer arithmetic(adding and subtracting,incrementing and decrementing)
// pointer to pointer
// pointer to array
// arrays
// const pointers
// warnings can be skipped by using -w flag
// 1. Memory allocation in C++
// 1.1 stack memory allocation
// 1.2 heap memory allocation
// 1.3 static/global variables
// 1.4 code segment
// heap memory allocation has more memory than stack memory
// 2. void pointers are used to allocate memory in heap
// 2.1 they cant be dereferenced
// 2.2 they are typeless pointers
// 3. uses of pointers
// 3.1 dynamic memory allocation
// 3.2 arrays
// 3.3 functions
// 3.4 data structures
// 3.5 file handling
// 3.6 pointers to functions

// #include <iostream>
// using namespace std;
// int *func(int *p)
// {
//     *p = *p + 1;
//     int sum = *p;
//     return &sum;
// }
// int main()
// {
//     int x = 10;
//     int *t = func(&x);
//     cout << x << "\n";
// *t = 20;// t points to a memory location which is deallocated after the function call therefore the warning
// t is an example of  dangling pointer
//     cout << x << "\n";
// }

// how to avoid dangling pointer
// 1. return the value instead of address
// 2. allocate memory in heap
// 3. use static keyword
// 4. use global variable
// 5. use const pointer
// #include <iostream>
// using namespace std;
// int *func(int *p)
// {
//     *p = *p + 1;
//     // int sum = *p;
//     return p;
// }
// int main()
// {
//     int x = 10;
//     int *t = func(&x);
//     cout << x << "\n";
//     *t = 20;
//     cout << x << "\n";
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     void *p = &a;
//     cout << *(int *)p << "\n";
//     //  *p = 20; // error : invalid conversion from 'void*' to 'int' [-fpermissive]
//     // cout << *(int *)p << "\n";
//     cout<< (long long)&p << "\n";
//     cout<< (long long)&p+1 << "\n";
// }

// pass by value is memory extensive as it creates a copy of the variable
// pass by reference is memory efficient because of the same

// demerits of pointers
// 1. memory leak
// 2. dangling pointers
// 3. wild pointers
// 4. uninitialized pointers
// 5. memory corruption
// 6. array out of bound access
// 7. memory fragmentation


//  can be solved by using references
#include<iostream>
using namespace std;
// int main(){
// int a=10;
// cout<<a<<"\n";
// int &b=a;
// b=20;
// cout<<b<<"\n";
// }
// int main(){
//     int a=10;
//     int &b=a;
//     int c=20;
//     b=c;
//     b=10;
//     cout<<a<<"\n";
//     cout<<b<<"\n"; // references can poiiint to only one variable
//     cout<<c<<"\n";    
// }
int main(){
    const int a=10;
    int c=200;
    // int &b=a;
    const int &b=a; // const reference can point to a non const variable as well as a const variable
    const int &d=c;
    cout<<"a : "<<a<<"\n";
    cout<<"b : "<<b<<"\n";
    cout<<"c : "<<c<<"\n";
    cout<<"d : "<<d<<"\n";
}
// no pointer arithmetic applicable on references
// references are used when u want to reduce memory usage
// references are used to pass the value to the function
// references are a type of pseudo pointer
// mandatory to initialize a reference
// once initialized it cannot be changed
// cant know the size of a refernce


