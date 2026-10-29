// Class 14: passing and returning structures.

#include<iostream>
#include<string>
using namespace std;
struct stud{
    string name;
    int age;
    int marks;
};
stud getStud(){
    stud s;
    cout<<"Enter name : "; cin>>s.name;
    cout<<"Enter age : "; cin>>s.age;
    cout<<"Enter marks : "; cin>>s.marks;
    return s;
}
void displayStud(stud &s){
    cout<<"Name : "<<s.name<<"\n";
    cout<<"Age : "<<s.age<<"\n";
    cout<<"Marks : "<<s.marks<<"\n";
}
void update(stud &s, int *mark){        // passes a reference to the structure and a pointer to the marks
    int mar;
    cout<<"Enter updated marks : "; cin>>mar;
    mark = &mar;
    s.marks = *mark;
}


// int main(){
//     // int num;cout<<"enter num  of students : ";cin>>num; 
//     stud s;
//     // for(int i = 0 ; i< num ; i++){
//         s = getStruct();
//         displayStruct(s);
//     // }
// }


// int main(){
//     stud s;
//     int *newmark;
//     s = getStud();
//     displayStud(s);
//     update(s,newmark);
//     displayStud(s);
// }


int main(){
    int a = 10;
    int b;
    int &b = a;
    b+=18;
    cout<<a;
}