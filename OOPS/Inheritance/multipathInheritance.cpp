// Multipath Inheritance
// When a base class has two derived classes and those two derived classes have one common 
// derived class.

#include<iostream>
using namespace std;


class A{
    public:
    A(){
        cout<<"Constructor for A"<<endl;
    }

    void aCaller(){
        cout<<"A_caller"<<endl;
    }
    ~A(){
        cout<<"Destructor for A"<<endl;
    }
    A(const A &a){
        cout<<"Copy constructor for A"<<endl;
    }

};

class B:public A{
    public:
    B(){
        cout<<"Constructor for B"<<endl;
    }
    ~B(){
        cout<<"Destructor for B"<<endl;
    }
    B(const B &b){
        cout<<"Copy constructor for B"<<endl;
    }
};

class C:public A{
    public:
    C(){
        cout<<"Constructor for C"<<endl;
    }
    C(const C &c){
        cout<<"Copy constructor for C"<<endl;
    }
    ~C(){
        cout<<"Destructor for C"<<endl;
    }
};

/*
Classes B and C have a single copy of the class A. Since, the class D is derived from B as well 
as C, it would have two copies of class A, one from class B and one from class C. If we need to 
access a method of class A through an object of class D, we must specify the path from which A
will be accessed, whether it is from class B or class C, because the compiler cannot differentiate 
between two copies of class A in class D.
*/

class D: public B,public C{
    public:
    D(){
        cout<<"Constructor for D"<<endl;
    }
    ~D(){
        cout<<"Destructor for D"<<endl;
    }
    D(const D &d){
        cout<<"Copy constructor for D"<<endl;
    }
};

int main(){ 
    D d;
    d.B::aCaller();
    return 0;
}