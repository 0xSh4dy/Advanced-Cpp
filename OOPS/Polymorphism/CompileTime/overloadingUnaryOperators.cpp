#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int value=0){
        this->value = value;
    }
    void printNumber(){
        cout<<"The number is "<<this->value<<endl;
    }

    Number operator +(){
        Number newNumber;
        newNumber.value = this->value*1;
        return newNumber;
    }

    Number operator -(){
        Number newNumber;
        newNumber.value = -1*value;
        return newNumber;
    }

    Number operator ++(){
        Number newNumber;
        newNumber.value = value+1;
        return newNumber;
    }

    Number operator ++(int){
        Number newNumber;
        newNumber.value = value+1;
        return newNumber;
    }

    Number operator --(){
        Number newNumber;
        newNumber.value = value-1;
        return newNumber;
    }
    Number operator --(int){
        Number newNumber;
        newNumber.value = value-1;
        return newNumber;
    }
    
};
int main(){
    Number n1(10);
    Number n2 = +n1;
    Number n3 = -n1;
    Number n4 = ++n1;
    Number n5 = n1++;
    Number n6 = --n1;
    Number n7 = n1--;
    n2.printNumber();
    n3.printNumber();
    n4.printNumber();
    n5.printNumber();
    n6.printNumber();
    n7.printNumber();
    return 0;
}