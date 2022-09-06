#include<iostream>
#include<memory>
using namespace std;

class Number{
    public:
    int value;
    Number(int value){
        this->value = value;
        cout<<"Constructor: Number"<<endl;
    }
    ~Number(){
        cout<<"Destructor: Number"<<endl;
    }
};
int main(){
    unique_ptr<Number>uptr = make_unique<Number>(10);
    cout<<uptr->value<<endl;
    unique_ptr<Number>uptr1 = move(uptr);
    cout<<uptr1->value<<endl;
    return 0;
}