// Stack: STL version (commented out) and an array-based class with push, pop and peek.

// implementation of stack using STL
// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout<<"Last element is: "<<s.top()<<"\n";
//     s.pop();
//     cout<<"Second element is: "<<s.top()<<"\n";
//     // s.pop();
//     // cout<<"First element is: "<<s.top()<<"\n";
//     // s.pop();
//     cout<<"Size of stack is: "<<s.size()<<"\n";
//     if(s.empty())
//         cout<<"Stack is empty\n";
//     else
//         cout<<"Stack is not empty\n";
// }

// implementation of stack using class and without in-built functions
#include<iostream>
using namespace std;
#define MAX 1000
class Stack{
    int top;
    public:
    int a[MAX]; // maximum size of stack
    Stack(){top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty(); 
    
};

bool Stack::push(int x)
{
    if(top==MAX-1)
    {
        cout<<"Stack Overflow\n";
        return false;
    }
    a[++top]=x;
    return true;
}

int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return a[top--];
}

int Stack::peek()
{
    if(top==-1)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    return a[top];
}

bool Stack::isEmpty()
{
    return (top==-1);
}
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Last element is: "<<s.peek()<<"\n";
    s.pop();
    cout<<"Second element is: "<<s.peek()<<"\n";
    s.pop();
    cout<<"First element is: "<<s.peek()<<"\n";
    s.pop();
    if(s.isEmpty())
        cout<<"Stack is empty\n";
    else
        cout<<"Stack is not empty\n";
    return 0;
}