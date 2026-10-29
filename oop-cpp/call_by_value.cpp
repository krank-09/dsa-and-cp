// Passing arguments by value.

#include <iostream>
using namespace std;
int func(int a)
{
    a += 2;
    return a;
}
bool func(bool a)
{
    a = !a;
    return a;
}
int main()
{
    int a = 10;
    cout << func(a) << " " << a << "\n";
    bool b = true;
    cout << func(b) << " " << b;
}