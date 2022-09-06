#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int value=0){
        this->value = value;
    }
    Number operator () (int x1, int x2, int x3, int x4){
        Number newNumber;
        newNumber.value = x1+x2+x3+x4+this->value;
        return newNumber;
    }
    void operator () (){
        cout<<"Overloaded function call operator"<<endl;
    }
    void printNumber(){
        cout<<"The number is "<<this->value<<endl;
    }
};
int main(){
    Number n1(5);
    Number n2 = n1(1,2,3,4);
    n1();
    n2.printNumber();
    return 0;
}