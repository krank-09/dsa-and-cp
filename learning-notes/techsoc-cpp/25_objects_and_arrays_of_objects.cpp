// Class 25: student details class.

#include<iostream>
#include<vector>
using namespace std;
// class StudDet{
//     public:
//     string name;
//     int rollno;    
//     StudDet(): name("No input"), rollno(0){}
//     StudDet(string n,int r):name(n),rollno(r){}
//     void getdata(){
//         cout<<"Enter name and rollno: ";
//         cin>>name>>rollno;
//     }
// };
// class PhysDet : public StudDet{
//     public:
//     int height;
//     int weight;
//     void getdata(){
//         StudDet::getdata();
//         cout<<"Enter height and weight: ";
//         cin>>height>>weight;
//     }
// };
// int main(){
//     PhysDet s1;

// }
class employee;
class manager;

#include<iostream>
#include<vector>
using namespace std;
// class StudDet{
//     public:
//     string name;
//     int rollno;    
//     StudDet(): name("No input"), rollno(0){}
//     StudDet(string n,int r):name(n),rollno(r){}
//     void getdata(){
//         cout<<"Enter name and rollno: ";
//         cin>>name>>rollno;
//     }
// };
// class PhysDet : public StudDet{
//     public:
//     int height;
//     int weight;
//     void getdata(){
//         StudDet::getdata();
//         cout<<"Enter height and weight: ";
//         cin>>height>>weight;
//     }
// };
// int main(){
//     PhysDet s1;

// }
class employee;
class manager;

class employee{
    int emp_id,emp_sal,emp_phno;
    string emp_name,emp_add;
    int mang_id = -1; 
    public:
    // employee():emp_id(0),emp_sal(0),emp_phno(0),emp_name("No input"),emp_add("No input"){}
    // employee(int id,int sal,int phno,string name,string add):emp_id(id),emp_sal(sal),emp_phno(phno),emp_name(name),emp_add(add){}
    friend void assignMgr(employee& e1,manager m1);
    void setData(){
        cout<<"Employee ID: "; cin>>emp_id;
        cout<<"Employee Name: "; cin>>emp_name;
        cout<<"Employee Salary: "; cin>>emp_sal;
        cout<<"Employee Phone Number: "; cin>>emp_phno;
        cout<<"Employee Address: "; cin>>emp_add;
    }
    void displayEmp(){
        cout<<"Employee ID: "<<emp_id<<"\n";
        cout<<"Employee Name: "<<emp_name<<"\n";
        cout<<"Employee Salary: "<<emp_sal<<"\n";
        cout<<"Employee Phone Number: "<<emp_phno<<"\n";
        cout<<"Employee Address: "<<emp_add<<"\n";
        cout<<"Manager ID: "<<mang_id<<"\n";
    }
};
class manager : public employee{
    int team_size;
    string branch;
    public:
    void displayMgr(){
        displayEmp();
        cout<<"Team Size: "<<team_size<<"\n";
        cout<<"Branch: "<<branch<<"\n";
    }
    void setDataMgr(){
        cout<<"Team Size: "; cin>>team_size;
        cout<<"Branch: "; cin>>branch;
        setData();
    }
};
class developer : public employee{
    string exp;
    vector<string> skills;
    public:
    void displayDev(){
        displayEmp();
        cout<<"Experience: "<<exp<<"\n";
    }
    void setDev(){
        cout<<"Experience: "; cin>>exp;
        cout<<"Skills: ";
        string temp;
        while(temp!="exit"){
            cin>>temp;
            skills.push_back(temp);
        }
        setData();
    }
    void addSkill(string s){
        skills.push_back(s);
    }
    
};
void assignMgr(employee& e1,manager m1){
    e1.mang_id = m1.emp_id;
    
}
int main(){
    employee e1;
    e1.setData();
    // e1.displayEmp();
    manager m1;
    m1.setDataMgr();
    // m1.displayMgr();
    assignMgr(e1, m1);
    e1.displayEmp();
}