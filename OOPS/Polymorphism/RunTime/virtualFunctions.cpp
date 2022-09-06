#include<iostream>
using namespace std;

class Base{
    public:
    virtual void greet(){
        cout<<"Base class | Good morning! Senpai"<<endl;
    }
    void sayHi(){
        cout<<"Base class |  Hello, senpai!"<<endl;
    }
    void test(){
        cout<<"Test fn"<<endl;
    }
};

class Derived:public Base{
    public:
    void greet(){
        cout<<"Derived class |  Good afternoon! Senpai"<<endl;
    }
    void sayHi(){
        cout<<"Derived class |  Hey there! Senpai"<<endl;
    }
};
int main(){

    // Derived d;
    // d.greet();
    
    Base*b = new Base();
    b->greet();
    b->sayHi();

    // Runtime polymorphism is achieved through a pointer of base class type
    Base *b1 = new Derived();
    b1->greet();
    b1->sayHi();
    b1->test();
    return 0;
}