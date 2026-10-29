// Class 21: a Date class.

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

#include <iostream>

class Date
{
    int year, month, day;
public:
    // Constructor
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    // Default Constructor
    Date() : year(2000), month(1), day(1) {}

    // Display Function
    void display() const
    {
        std::cout << year << "-" << (month < 10 ? "0" : "") << month << "-"
                  << (day < 10 ? "0" : "") << day << std::endl;
    }
    // Accessor functions
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
    // Setter functions
    void setYear(int newYear) {year = newYear;}
    void setMonth(int newMonth) {month = newMonth;}
    void setDay(int newDay) {day = newDay;}
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

int main()
{
    Date d;
    std::cin >> d;
    std::cout << d;
    return 0;
}