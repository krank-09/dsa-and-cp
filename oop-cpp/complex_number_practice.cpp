// Complex number class practice.

// #include <iostream>

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

//     // Overloading the + operator
//     Complex operator+(const Complex& other) const {
//         return Complex(real * other.real, imag * other.imag);
//     }

//     // Overloading the output stream operator <<
//     friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
//         os << c.real;
//         if (c.imag >= 0) {
//             os << " + " << c.imag << "i";
//         } else {
//             os << " - " << -c.imag << "i";
//         }
//         return os;
//     }
// };

// int main() {
//     Complex c1(2, 3);
//     Complex c2(1, -1);

//     std::cout << "c1 = " << c1 << std::endl;
//     std::cout << "c2 = " << c2 << std::endl;

//     std::cout << "c1 + c2 = " << c1 + c2 << std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Base {
// public:
//     virtual void showBase() {
//         cout << "This is the Base class\n";
//     }
// };
// class Derived1 : public Base {
// public:
//     void showBase() override {
//         cout << "This is Derived1 class\n";
//     }
// };
// class Derived2 :  public Base {
// public:
//     void showBase() override {
//         cout << "This is Derived2 class\n";
//     }
// };

// int main() {
//     Base* bptr = new Base();
//     Base*baptr= new Derived1();
//     Base*basPtr = new Derived2();
//     bptr->showBase();  
//     baptr->showBase();
//     basPtr->showBase();
// }

// file handling operations 
// #include <iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream outFile("a.txt");
//     outFile<<"Hello, World!" << endl;
//     outFile.close();
// }

// #include <iostream>
// using namespace std;
// class Rectangle {
// public:
//     double length,breadth;

//     Rectangle(double l = 0.0, double b = 0.0) : length(l), breadth(b) {}

//     // Overloading the + operator
//     Rectangle operator+(const Rectangle& other)  {
//         return Rectangle(length - other.length, breadth - other.breadth);
//     }

//     // Overloading the output stream operator <<
//     friend std::ostream& operator<<(std::ostream& os, const Rectangle& c) {
//         os << "Length: " << c.length << ", Breadth: " << c.breadth;
//         return os;
//     }
// };

// int main() {
//     Rectangle r1(2, 3);

//     cout << "r1 = " << r1 << std::endl;

//     Rectangle r2(4, 5);
//     Rectangle r3 = r1 + r2;

//     cout << "r3 = " << r3 << std::endl;
//     return 0;
// }

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream out;
    // out.open("a.txt",ios::app);
    // string name;
    // cin>>name;
    // out<<name;

    // ifstream ank("a.txt",ios::in);
    // string line;
    // while(getline(ank,line)){
    //     cout<<line<<endl;
    // }
    // ank.close();
    fstream file("a.txt", ios::in | ios::out );
    file<<"Hello, World!" << "\n";
    file.close();
}