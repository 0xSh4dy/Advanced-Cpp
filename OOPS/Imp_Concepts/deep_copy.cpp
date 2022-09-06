#include<iostream>
using namespace std;

class Number{
    public:
    int *value;
    Number(int value=0){
        this->value = new int;
        *(this->value) = value;
        cout<<"Constructor:number"<<endl;
    }
    Number(const Number &num){
        value = new int;
        *value = *num.value;
        cout<<"Copy constructor: number"<<endl;
    }
    ~Number(){
        cout<<"Destructor: number"<<endl;
    }
};
int main(){

    // // Shallow copy
    // Number n1(10);
    // Number n2;
    // n2 = n1;
    // *n2.value = 1000;
    // cout<<*n1.value<<endl;
    // cout<<*n2.value<<endl;


    // Deep Copy
    Number n1(10);
    Number n2 = n1;
    *n2.value = 1000;
    cout<<*n2.value<<endl;
    cout<<*n1.value<<endl;
    return 0;
}