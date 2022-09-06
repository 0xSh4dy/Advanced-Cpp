// More than one subclass is inherited from a single base class i.e more than one derived class
// can be created from a single base class

#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"Constructor for Vehicle"<<endl;
    }
    Vehicle(const Vehicle &vec){
        cout<<"Copy constuctor for Vehicle"<<endl;
    }
    ~Vehicle(){
        cout<<"Destructor for Vehicle"<<endl;
    }
};

class Car:public Vehicle{
    public:
    Car(){
        cout<<"Constructor for Car"<<endl;
    }
    Car(const Car &c){
        cout<<"Copy constructor for Car"<<endl;
    }
    ~Car(){
        cout<<"Destructor for Car"<<endl;
    }
};

class Bus:public Vehicle{
    public:
    Bus(){
        cout<<"Constructor for Bus"<<endl;
    }
    Bus(const Bus &b){
        cout<<"Copy constructor for Bus"<<endl;
    }
    ~Bus(){
        cout<<"Destructor for Bus"<<endl;
    }
};

int main(){
    Vehicle *v = new Bus();
    delete v;
    return 0;
}