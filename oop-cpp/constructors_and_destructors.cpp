// Order of constructor and destructor calls.

#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    float marks;
    public:
    student(int r, string n, float m):roll(r),name(n),marks(m){}
    student():roll(0),name("No Input"),marks(0){} // initializer list
    void getinfo(int r, string n, float m){
        roll = r;
        name = n;
        marks = m;
    }
    void showinfo(){
        cout << "Name: " << name << "  ";
        cout << "Roll: " << roll << "  ";
        cout << "Marks: " << marks << "  ";
        cout << "\n";
    }
    ~student(){
        cout << "Destructor \n";
    }
};
int main(){
    student s1(1, "John", 90);
    student s2;
    s2.getinfo(2, "Doe", 80);
    s1.showinfo();
    s2.showinfo();
}
// copy constructor