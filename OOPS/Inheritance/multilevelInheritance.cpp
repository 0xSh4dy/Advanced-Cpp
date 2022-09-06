// Class A -> Class B -> Class C
// Derived class is created from another derived class
#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"Constructor for Vehicle"<<endl;
    }
    Vehicle(const Vehicle &veh){
        cout<<"Copy constructor for Vehicle"<<endl;
    }
    ~Vehicle(){
        cout<<"Destructor for Vehicle"<<endl;
    }
};

class FourWheeler:public Vehicle{
    public:
    FourWheeler(){
        cout<<"Constructor for FourWheeler"<<endl;
    }
    FourWheeler(const FourWheeler &fw){
        cout<<"Copy constructor for four wheeler"<<endl;
    }
    ~FourWheeler(){
        cout<<"Destructor for FourWheeler"<<endl;
    }
};

class Car:public FourWheeler{
    public:
    Car(){
        cout<<"Constructor for Car"<<endl;
    }
    Car(const Car &car){
        cout<<"Copy constructor for Car"<<endl;
    }
    ~Car(){
        cout<<"Destructor for Car"<<endl;
    }
};
int main(){
    FourWheeler *v = new Car();
    delete v;
    return 0;
}