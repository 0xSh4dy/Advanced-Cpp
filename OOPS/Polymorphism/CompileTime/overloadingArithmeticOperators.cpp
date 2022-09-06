#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int value=0){
        this->value = value;
    }
    Number operator + (const Number &num){
        Number newNumber;
        newNumber.value = this->value + num.value;
        return newNumber;
    }

    Number operator - (const Number&num){
        Number newNumber;
        newNumber.value = this->value - num.value;
        return newNumber;
    }

    Number operator * (const Number& num){
        Number newNumber;
        newNumber.value = this->value * num.value;
        return newNumber;
    }
    Number operator / (const Number &num){
        Number newNumber;
        newNumber.value = this->value / num.value;
        return newNumber;
    }
    void printNumber(){
        cout<<"The number is "<<this->value<<endl;
    }
};
int main(){
    Number n1(10),n2(5);
    Number n3 = n1+n2;
    Number n4 = n1-n2;
    Number n5 = n1*n2;
    Number n6 = n1/n2;
    n3.printNumber();
    n4.printNumber();
    n5.printNumber();
    n6.printNumber();
    return 0;
}