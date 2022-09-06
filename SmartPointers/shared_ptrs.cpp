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
    // sptr2 = sptr1;
    shared_ptr<Number>sptr2 = sptr1;
    sptr1.reset();

    cout<<sptr2->value<<endl;
    cout<<sptr2.use_count()<<endl;
    return 0;
}