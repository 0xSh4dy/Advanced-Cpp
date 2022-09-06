#include<iostream>
#include<memory>
using namespace std;

class Number{
    public:
    int value;
    Number(int value){
        this->value = value;
    }
};

class NewNumber{
    public:
    int value;
    NewNumber(int value){
        this->value = value;
    }
};
int main(){
    shared_ptr<Number>sptr1 = make_shared<Number>(10);
    weak_ptr<Number>wptr1 = sptr1;
    cout<<wptr1.expired()<<endl;
    // sptr1.reset();
    cout<<wptr1.expired()<<endl;

    shared_ptr<Number>sptr2 = wptr1.lock();
    cout<<sptr1.use_count()<<endl;
    if(sptr2){
        cout<<"Pointer exists";
    }
    else{
        cout<<"Dangling pointer"<<endl;
    }
    return 0;
}