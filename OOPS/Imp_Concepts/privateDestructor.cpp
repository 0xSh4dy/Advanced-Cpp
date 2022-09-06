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
    private:
    ~Base(){
        cout<<"Base: Destructor"<<endl;
    }
    friend int main();
};

int main(){
    Base*b = new Base();
    delete b;
    return 0;
}