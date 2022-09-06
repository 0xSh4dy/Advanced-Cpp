#include<iostream>
using namespace std;

class Person{
    int id;
    string name;
    public:
    void addPerson(int id, string name){
        this->id = id;
        this->name = name;
    }

    void displayPerson(){
        cout<<".........................................................."<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<".........................................................."<<endl;
    }
};

class Student:public Person{
    int studentID;
    string name;
    public:
    void addStudent(int studentID,string name){
        this->studentID = studentID;
        this->name = name;
    }
    void displayStudent(){
        cout<<"Student ID: "<<this->studentID<<endl;
        cout<<"Student name: "<<this->name<<endl;
    }
};
int main(){

    Person p1;
    p1.addPerson(1,"shady");
    p1.displayPerson();

    Student s1;
    s1.addStudent(3,"student_shady");
    s1.displayStudent();

    Person* p4 = new Student();
    p4->addPerson(111,"shade");
    p4->displayPerson();
    return 0;
}