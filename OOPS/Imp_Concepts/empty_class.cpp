#include<iostream>
using namespace std;

class Empty{

};

class Derived1:public Empty{
};

class Derived2:virtual public Empty{ // a pointer to virtual base class is added, that increases
                            // the size 
};

class Derived3:public Empty{
    char c;
};

class Derived4:virtual public Empty{
    char c;
};

class Dummy:virtual public Empty{
    char c1;
    virtual void func();
    virtual void newFunc(){};
    /*This class has a virtual function, so a virtual pointer is added to each object of the class.*/
};


int main(){
    cout<<sizeof(Empty)<<endl;
    cout<<sizeof(Derived1)<<endl;
    cout<<sizeof(Derived2)<<endl;
    cout<<sizeof(Derived3)<<endl;
    cout<<sizeof(Derived4)<<endl;
    cout<<sizeof(Dummy)<<endl; 
    return 0;
}