#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(string name){
        this->name = name;
        cout<<"Adding student "<<name<<endl;
    }
    void GetStudentName(){
        cout<<this->name<<endl;
    }
    void GetStudentName(string );
    ~Student(){
        cout<<"Removing student "<<name<<endl;
    }
};

void Student::GetStudentName(string newName){
    this->name = newName;
}

int main(){
    cout<<"............................................................"<<endl;
    Student* s1 = new Student("shady");
    s1->name = "shadie";
    delete s1;
    cout<<"............................................................"<<endl;
    Student s2("sh4dy");
    s2.name = "sh4444dy";
    return 0;
}