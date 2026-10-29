// Student record class: read and display details.

#include <iostream>
#include <cstring>
using namespace std;

class student
{
    int roll;
    char name[50];
    float marks;

public:
    void getinfo(int r, const char n[], float m)
    {
        roll = r;
        strcpy(name, n);
        marks = m;
    }
    void showinfo()
    {
        cout << "Name: " << name << "  ";
        cout << "Roll: " << roll << "  ";
        cout << "Marks: " << marks << "  ";
        cout<<"\n";
    }
};

int main()
{ 
    int len;
    cout << "Enter the number of students: ";
    cin >> len;
    student s[len];
    for (int i = 0; i < len; i++)
    {
        int r;
        char n[50];
        float m;
        cout << "Enter the roll num of student " << i + 1 << ": ";
        cin >> r;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore();       
        cin.getline(n, 50); 
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> m;
        s[i].getinfo(r, n, m);
    }
    for (int i = 0; i < len; i++)
        s[i].showinfo();
}