// Class 22: operator overloading (complex numbers).

#include <iostream>
#include <string>
#include <cassert>
using namespace std;
// class complex
// {
//     int real, imag;
// public:
//     complex(int r, int i) : real(r), imag(i) {}
//     complex() : real(0), imag(0) {}

//     void display()
//     {
//         cout << real << " + i" << imag << endl;
//     }
//     int getReal() { return real; }
//     int getImag() { return imag; }
//     void setReal(int newReal) { real = newReal; }
//     void setImag(int newImag) { imag = newImag; }
// };
// ostream& operator<<(ostream& out, complex c)
// {
//     out << c.getReal() << " + " << c.getImag() << "i" << "\n";
//     return out;
// }
// istream& operator>>(istream& in, complex &c)
// {
//     int re,im;
//     in >>re >> im;
//     c.setReal(re);
//     c.setImag(im);
//     return in;
// }
// int main()
// {
//     complex c1;
//     cin >> c1;
//     cout<<c1;
// }

// class fraction
// {
//     int nume, deno;

// public:
//     fraction(int n, int d) : nume(n), deno(d)
//     {
//         assert(d != 0); // checks for the value of b from being 0
//     }
//     fraction() : nume(1), deno(1) {}

//     int getNume() { return nume; }
//     int getDeno() { return deno; }
//     void setNume(int n) { nume = n; }
//     void setDeno(int d) { deno = d; }

//     void Display()
//     {
//         cout << nume << "/" << deno;
//     }
//     // post and pre increment can be done with member functions only
//     // the function definition for the post and pre can be differentiated using parameter (int) [post : int ; pre no parameter] 
//     // bool operator>(fraction f1){      // no need to give the first parameter as it is already given by default inside the class
//     //     float a = (float)(nume/deno);
//     //     float b = (float)(f1.nume/f1.deno);
//     //     if(a>b) return true;
//     //     else return false;
//     // }
//     // bool operator==(fraction f1){
//     //     float a = (float)(nume/deno);
//     //     float b = (float)(f1.nume/f1.deno);
//     //     if(a==b) return true;
//     //     else return false;
//     // }
// };
// ostream &operator<<(ostream &out, fraction f) // cant be done as member function
// {
//     out << f.getNume() << "/" << f.getDeno();
//     return out;
// }
// istream &operator>>(istream &in, fraction &f) // same as ostream
// {
//     int n, d;
//     in >> n >> d;
//     f.setNume(n);
//     f.setDeno(d);
//     return in;
// }
// bool operator>(fraction f, fraction f1)
// {    
//         int g = f.getNume();
//         int h = f.getDeno();
//         int i = f1.getNume();
//         int j = f1.getDeno();
//         float a = (float)(g/h);
//         float b = (float)(i/j);
//         if(a>b) return true;
//         else return false;
// }
// bool operator==(fraction f,fraction f1){
//         int k = f.getNume();
//         int l = f.getNume();
//         int m = f1.getNume();
//         int n = f1.getNume();
//         float a = (float)(k/l);
//         float b = (float)(m/n);
//         if(a==b) return true;
//         else return false;
//     }
// int main()
// {
//     fraction f, f1;
//     cin >> f;
//     cin >> f1;

//     cout << f<<"\n";
//     cout << f1<<"\n";
//     cout<<(f>f1)<<"\n";
//     cout<<(f==f1);
// }

// homework : overload : <,>=,<=,!=,--

// class homework{
//     int num1,num2;
// public:
//     homework(int n1, int n2): num1(n1),num2(n2){}
//     homework() : num1(1), num2(1) {}

//     int getNum1() { return num1;}
//     int getNum2() { return num2;}
//     void setNum1(int nu) { num1 = nu;}
//     void setNum2(int nu) { num2 = nu;}
//     void display(){
//         cout<<num1<<"&"<<num2;
//     }
//     // operator++(homework h1){

//     // }
// };
// ostream& operator<<(ostream& o,homework h){
//     o<<h.getNum1()<<"&"<<h.getNum2();
//     return o;
// }
// istream& operator>>(istream& i, homework &h){
//     int n1,n2;
//     i>>n1>>n2;
//     h.setNum1(n1); h.setNum2(n2);
//     return i;
// }
// bool operator<(homework h, homework){
//     int a=h.getNum1();
//     int b= h.getNum2();
//     if(a<b) return true;
//     else return false;
// }
// bool operator>=(homework h, homework){
//     int a = h.getNum1();
//     int b = h.getNum2();
//     if(a>=b)return true;
//     else return false;
// }
// bool operator<=(homework h,homework){
//     int a = h.getNum1();
//     int b = h.getNum2();
//     if(a<=b) return true;
//     else return false;
// }
// bool operator!=(homework h, homework){
//     int a = h.getNum1();
//     int b = h.getNum2();
//     if(a!=b) return true;
//     else return false;
// }


// int main(){
//     homework h,h1;
//     cin>>h;
//     cin>>h1;
//     cout<<h<<"\n"<<h1;
//     cout<<(h<h1)<<"\n"<<(h>=h1)<<"\n"<<(h<=h1)<<"\n"<<(h!=h1);
// }

// class weather{
//     double temp[7];
//     int day;
// public:
//     // weather(int day): temp[day](te){  // not how to initialize array in constructors
//     //     assert(t>=1 && t<=7);        // will learn later 
//     // }
//     // weather(): temp(0){}           // has different syntax for arrays
//     double getTemp(int day){return temp[day];}
//     void setTemp(int day,double tem){temp[day] = tem;}
//     void display(){
//         cout<<temp;
//     }
//     double& operator[](int day){
//         assert(day>=1 && day<=7);
//         return temp[day];
//     }
//     double& operator[](string t){
//         int op;
//         switch (op)
//         {
//         case '1':
//             return temp[0];
//         case '2':
//             return temp[1];
//         case '3':
//             return temp[2];
//         case '4':
//             return temp[3];
//         case '5':
//             return temp[4];
//         case '6':
//             return temp[5];
//         case '7':
//             return temp[6];    
//         default:
//             cout<<"Invalid input";
//             exit(7);
//         }
//     }
// };
// ostream& operator<<(ostream& o, weather w){
//     int t;
//     o<<w.getTemp(t);
//     return o;
// }
// istream& operator>>(istream& i, weather &w){
//     int day,tem;
//     i>>day>>tem;
//     w.setTemp(day,tem);
//     return i;
// }
// int main(){
//     weather w;
//     // int day;
//     // string s;
//     cin>>w;
//     cout<<w<<"\n"<<w[2];
// }