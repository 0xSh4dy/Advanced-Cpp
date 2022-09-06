#include<iostream>
using namespace std;

/*
Operator overloading is a type of compile type polymorphism. Operator overloading is nothing but
an idea of giving special meaning to an existing operator in C++ without changing its original 
meaning.
*/

// Overloading the + operator

class Complex{
    int real;
    int imaginary;
    public:
    Complex(int real=0, int imaginary=0){
        this->real = real;
        this->imaginary = imaginary;
    }

   Complex operator + (const Complex &obj){
        Complex result;
        result.real = this->real + obj.real;
        result.imaginary = this->imaginary + obj.imaginary;
        return result;
   }
    
    void printComplex(){
        cout<<this->real<< " + "<<this->imaginary<<"i"<<endl;
    }

};
int main(){
    Complex c1(5,10);
    Complex c2(10,4);
    Complex c3 = c1+c2;
    c3.printComplex();
    return 0;
}