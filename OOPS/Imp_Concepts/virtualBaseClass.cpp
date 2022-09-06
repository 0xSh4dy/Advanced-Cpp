// Ambiguity resolution can be resolved by using virtual base classes.
/*
Virtual base classes are used in virtual(multipath) inheritance to prevent multiple instances of a given 
class.
*/

#include<iostream>
using namespace std;

class A{
    public:
    void a_caller(){
        cout<<"This is A caller"<<endl;
    }
};
class B:virtual public A{
    
};
class C:virtual public A{

};
class D:public B,public C{

};
int main(){
    D d;
    d.a_caller();
    return 0;
}