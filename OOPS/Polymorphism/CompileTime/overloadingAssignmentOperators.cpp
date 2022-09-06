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
   
    void operator = (const Number &num){
        this->value = num.value*10;        
    }

    void operator += (int num){
        this->value += num;
    }
    void operator -= (int num){
        this->value -= num;
    }
    void operator *= (int num){
        this->value *= num;
    }
    void operator /= (int num){
        this->value /= num;
    }
    void operator %= (int num){
        this->value %= num;
    }
};
int main(){
    Number n1(1);
    Number n2 = n1;
    Number n3,n4=n1,n5=n1;
    n3 = n1;
    n2.printNumber();
    n3.printNumber(); 
    n4 += 2;
    n4.printNumber();
    n4 -= 2;
    n4.printNumber();
    n4 *= 2;
    n4.printNumber();
    n4 /= 2;
    n4.printNumber();
    n4 *= 100;
    n4 %=7;
    n4.printNumber();
    return 0;
}