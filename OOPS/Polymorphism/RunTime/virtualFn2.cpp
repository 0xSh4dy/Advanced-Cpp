#include<iostream>
using namespace std;

class Base{
    public:
    virtual void function_one(){
        cout<<"Base 1"<<endl;
    }
    virtual void function_two(){
        cout<<"Base 2"<<endl;
    }
    virtual void function_three(){
        cout<<"Base 3"<<endl;
    }
    virtual void function_four(){
        cout<<"Base 4"<<endl;
    }
};

class Derived:public Base{
    public:
    void function_one(){
        cout<<"Derived 1"<<endl;
    }
    void function_two(){
        cout<<"Derived 2"<<endl;
    }
    void function_four(){
        cout<<"Derived 4"<<endl;
    }
}
;


int main(){
    Base *b = new Derived();
    b->function_one();
    b->function_two();
    b->function_three();
    b->function_four();
    return 0;
}