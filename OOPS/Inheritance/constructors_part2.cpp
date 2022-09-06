#include<iostream>
using namespace std;

class Student{
    string name;
    public:
    Student(string name){
        this->name = name;
        cout<<"Calling constructor for Student "<<this->name<<endl;
    }
    Student(const Student &stud){
        this->name = stud.name;
        cout<<"Calling copy constructor for Student "<<this->name<<endl;
    }
    ~Student(){
        cout<<"Calling destructor for Student "<<this->name<<endl;
    }

};
int main(){
    Student s1("sh4dy");
    Student s2 = s1;
    return 0;
}