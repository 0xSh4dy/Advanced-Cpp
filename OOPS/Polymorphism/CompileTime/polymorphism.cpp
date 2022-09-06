/*
Polymorphism means different forms. It occurs when a function or operators behaves differently
in different scenarios. In C++, there are two types of polymorphism: Compile-time and Run-time.
Compile-time polymorphism can be achieved by function or operator overloading. Run-time poly-
morphism is achieved by overriding functions (by using virtual functions).
*/

// Compile-Time Polymorphism (Function Overloading)

#include<iostream>
using namespace std;

void func1(){
    cout<<"This function does not contain arguments"<<endl;
}

void func1(int arg1){
    cout<<"This function contains one argument"<<endl;
}

void func1(int arg1, int arg2){
    cout<<"This function contains two arguments"<<endl;
}
int main(){
    func1();
    func1(1);
    func1(1,2);
    return 0;
}