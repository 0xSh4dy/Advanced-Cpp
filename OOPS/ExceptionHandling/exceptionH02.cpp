#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base: Constructor"<<endl;
    }
    Base(const Base &b){
        cout<<"Base: Copy constructor"<<endl;
    }
    ~Base(){
        cout<<"Base: Destructor"<<endl;
    }
    
};
int main(){
    Base b;

    try{
        Base b1 = b;
        throw 10;
    }
    catch(...){
        cout<<"Caught exception"<<endl;
    }
    return 0;
}