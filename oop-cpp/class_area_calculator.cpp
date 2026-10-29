// Class that computes areas of shapes.

#include <iostream>
#define pi 3.14
using namespace std;

class dimensions
{
    int areaorec, areaos;
    int a, b, c;
    float rad, areaoc;

public:
    int area(int a, int b)
    {
        areaorec = a * b;
        return areaorec;
    }
    int area(int c)
    {
        areaos = c * c;
        return areaos;
    }
    float area(float rad)
    {
        areaoc = pi * rad * rad;
        return areaoc;
    }
    
};
int main()
{
    int a, b, c;
    float rad;
    cout << "Enter the dimensions of rectangle: ";
    cin >> a >> b;
    cout << "Enter the side of square: ";
    cin >> c;
    cout << "Enter the radius of circle: ";
    cin >> rad;
    dimensions d;
    cout << "Area of rectangle: " << d.area(a, b) << endl;
    cout << "Area of square: " << d.area(c) << endl;
    cout << "Area of circle: " << d.area(rad) << endl;
}