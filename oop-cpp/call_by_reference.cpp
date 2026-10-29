// Passing arguments by reference.

#include <iostream>
#include <cstring>
using namespace std;
int func(int *a)
{
    *a += 2;
    return *a;
}
bool func(bool *a)
{
    *a = !*a;
    return *a;
}
int main()
{
    int b = 10;
    cout << func(&b) << " " << b << "\n";
    bool c = true;
    cout << func(&c) << " " << c ;
}




