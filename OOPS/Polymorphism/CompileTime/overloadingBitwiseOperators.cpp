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

    Number operator | (const Number &num){
        Number newNumber;
        newNumber.value = num.value | this->value;
        return newNumber;
    }

    Number operator & (const Number &num){
        Number newNumber;
        newNumber.value = num.value & this->value;
        return newNumber;
    }
    Number operator >> (int val){
        Number newNumber;
        newNumber.value = this->value >> val;
        return newNumber;
    }
    Number operator << (int val){
        Number newNumber;
        newNumber.value = this->value << val;
        return newNumber;
    }
    Number operator ^ (int val){
        Number newNumber;
        newNumber.value = this->value ^ val;
        return newNumber;
    }
    Number operator ~ (){
        Number newNumber;
        newNumber.value = ~this->value;
        return newNumber;
    }
};

int main(){
    Number n1(2);
    Number n2(1);
    Number n3 = n1 | n2;
    Number n4 = n1 & n2;
    Number n5 = n1 >> 2;
    Number n6 = n1 << 2;
    Number n7 = n1 ^ 1;
    Number n8 = ~n1;
    n3.printNumber();
    n4.printNumber();
    n5.printNumber();
    n6.printNumber();
    n7.printNumber();
    n8.printNumber();
    
    return 0;
}