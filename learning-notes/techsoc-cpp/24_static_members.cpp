// Class 24: static members (Fraction class).

#include <iostream>
#include <cassert>
using namespace std;
// class Fraction
// {
//     int num;
//     int denom;

// public:

//     inline static int fracConst = 0;  // static member variables cant access the non-static member variables

//     Fraction() : num(0), denom(1) {} // can access the static member variables
//     Fraction(int a, int b) : num(a), denom(b)
//     {
//         assert(b != 0);
//         // fracConst++;
//         incCount();
//     }

//     int getNum() const { return num; }
//     int getDenom() const { return denom; }
//     void setNum(int newNum) { num = newNum; }
//     void setDenom(int newDen)
//     {
//         assert(newDen != 0);
//         denom = newDen;
//     }
//     static void incCount(){fracConst++;}
//     static void decCount(){fracConst--;}
//     // ~Fraction() { fracConst--; }
//     ~Fraction() { decCount(); }
// };
// // int Fraction::fracConst = 0;
// ostream &operator<<(ostream &o, Fraction f)
// {
//     o << f.getNum() << '/' << f.getDenom();
//     return o;
// }
// istream &operator>>(istream &in, Fraction &f)
// {
//     int n, d;
//     in >> n >> d;
//     f.setNum(n);
//     f.setDenom(d);
//     return in;
// }
// int main()
// {
//     Fraction f1(2, 3);
//     Fraction f2(1, 2);
//     cout << f1 << " "<< f2 << " " << Fraction::fracConst;
// }
// #include <iostream>
// class Date
// {
// private:
//     int year, month, day;

// public:
//     // Constructor
//     Date(int y, int m, int d) : year(y), month(m), day(d) {}

//     // Default Constructor
//     Date() : year(2000), month(1), day(1) {}

//     // Display Function
//     void display() const
//     {
//         std::cout << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day << std::endl;
//     }
//     // Accessor functions
//     int getYear() const { return year; }
//     int getMonth() const { return month; }
//     int getDay() const { return day; }
// };

// int main()
// {
//     Date date1(2025, 3, 10);
//     Date date2(2024, 8, 15);

//     date1.display();
//     date2.display();

//     return 0;
// }

class Date
{
    int year, month, day;
public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
    Date() : year(2000), month(1), day(1) {}
    void display() const
    {
        std::cout << year << "-" << (month < 10 ? "0" : "") << month << "-"
                  << (day < 10 ? "0" : "") << day << std::endl;
    }
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
    void setYear(int newYear) {year = newYear;}
    void setMonth(int newMonth) {month = newMonth;}
    void setDay(int newDay) {day = newDay;}
    static Date fromStr(string d){
        // Date d1;
        int yr = stoi(d.substr(0,4));
        int mh = stoi(d.substr(5,2));
        int days = stoi(d.substr(8,2));
        // d1.setMonth(mh); d1.setYear(yr); d1.setDay(days);
        Date d1{yr, mh, days}; // faster then above line of code 
        return d1;
    }
    void disStr(){
        cout<<year<<"-"<<month<<"-"<<day;
    }
};

std::ostream& operator<<(std::ostream& out, Date d)
{
    out << d.getYear() << '-' << d.getMonth() << '-' << d.getDay();
    return out;
}

std::istream& operator>>(std::istream& in, Date& d) // has to be passed as a refernce to change the object rather than changing the copy of the object
{
    int y, m, dy;
    in>>y>>m>>dy;
    d.setYear(y); d.setMonth(m); d.setDay(dy);
    return in;
}
// all member functions are converted to static member functions by compiler
// reasin why ostream ans istream cant be done in the class
// as any member function has an auto parameter of the class type
// the parameter is excess and the syntax will be opposite
// cout<<a; will be wrong :: a<<cout; will be correct
int main()
{
    Date d,d1;
    string s;
    getline(cin,s);
    d1=Date::fromStr(s);
    // cin >> d;
    cout << d1;
}