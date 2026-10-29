// Class 26: inheritance with a bank account class.

#include <iostream>
using namespace std;
class account
{
protected:
    double balance;
    int accnum;

public:
    account() : balance(0), accnum(0) {}
    account(int a, double b) : accnum(a), balance(b) {}
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance < amount)
            cout << "Insufficient balance" << "\n";
        else
            balance -= amount;
    }
    double viewbal()
    {
        return balance;
    }
    void transfun(account &a1, double amount)
    {
        if (balance < amount)
            cout << "Insufficient balance" << "\n";
        else
        {
            balance -= amount;
            a1.balance += amount;
        }
    }
};
class savingsacc : public account
{
    double intrate;

public:
    savingsacc(int a, double b, double i) : account(a, b), intrate(i) {}
    void appint(double rate)
    {
        balance += balance * intrate / 100.00;
    }
};
class currentacc : public account
{
    double overdraftlimit;

public:
    currentacc(int a, double b, double o) : account(a, b), overdraftlimit(o) {}
    void withdraw(double amount)
    {
        if (balance < 0 && balance - amount < 0)
            cout << "Insufficient balance" << "\n";
        else
            balance -= amount;
    }
};
int main()
{
    savingsacc s1(001, 1000, 2.0);
    currentacc c1(002, 2000, 500);
    s1.deposit(1000);
    c1.deposit(1000);
    s1.appint(2.0); 
    c1.withdraw(600);
    s1.transfun(c1, 600);
}

// class person
// {
//     protected:
//     string name;
//     int age;
//     public:
//     person():name("No Input"),age(0){}
//     person(string n, int a):name(n),age(a){}
//     void getper(){
//         cout<<"Enter name: "; cin>>name;
//         cout<<"Enter age: "; cin>>age;
//     }
//     void setper(string n, int a){
//         name = n;
//         age = a;
//     }
//     void disper(){
//         cout<<"Name: "<<name<<"\n";
//         cout<<"Age: "<<age<<"\n";
//     }
// };
// class student : protected person
// {
//     protected:
//     int std_id;
//     string dept;
//     public:
//     student():std_id(0),dept("No Input"){}
//     student(int id, string d):std_id(id),dept(d){}
//     void getstd(){
//         person::getper();
//         cout<<"Enter student id: "; cin>>std_id;
//         cout<<"Enter department: "; cin>>dept;
//     }
//     void setstd(string n, int a, int id, string d){
//         person::setper(n,a);
//         std_id = id;
//         dept = d;
//     }
//     void disstd(){
//         cout<<"Name: "<<name<<"\n";
//         cout<<"Age: "<<age<<"\n";
//         cout<<"Student ID: "<<std_id<<"\n";
//         cout<<"Department: "<<dept<<"\n";
//     }
// };
// class teacher : protected person
// {
//     int teach_id;
//     string subject;
//     public:
//     teacher():teach_id(0),subject("No Input"){}
//     teacher(int id, string s):teach_id(id),subject(s){}
//     void getteach(){
//         person::getper();
//         cout<<"Enter teacher id: "; cin>>teach_id;
//         cout<<"Enter subject: "; cin>>subject;
//     }
//     void setteach(string n, int a, int id, string s){
//         person::setper(n,a);
//         teach_id = id;
//         subject = s;
//     }
//     void disteach(){
//         cout<<"Name: "<<name<<"\n";
//         cout<<"Age: "<<age<<"\n";
//         cout<<"Teacher ID: "<<teach_id<<"\n";
//         cout<<"Subject: "<<subject<<"\n";
//     }
// };
// class researchstd : protected student
// {
//     string field;
//     string guide;
//     public:
//     researchstd():field("No Input"),guide("No Input"){}
//     researchstd(string f, string g):field(f),guide(g){}
//     void getres(){
//         student::getstd();
//         cout<<"Enter field: "; cin>>field;
//         cout<<"Enter guide: "; cin>>guide;
//     }
//     void setres(string n, int a, int id, string d, string f, string g){
//         student::setstd(n,a,id,d);
//         field = f;
//         guide = g;
//     }
//     void disres(){
//         cout<<"Name: "<<name<<"\n";
//         cout<<"Age: "<<age<<"\n";
//         cout<<"Student ID: "<<std_id<<"\n";
//         cout<<"Department: "<<dept<<"\n";
//         cout<<"Field: "<<field<<"\n";
//         cout<<"Guide: "<<guide<<"\n";
//     }
// };