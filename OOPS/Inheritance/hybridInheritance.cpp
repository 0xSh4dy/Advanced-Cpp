// Hybrid (Virtual) Inheritance
// Implemented by combining more than one type of inheritance
#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"Constructor for Vehicle"<<endl;
    }
    ~Vehicle(){
        cout<<"Destructor for Vehicle"<<endl;
    }
    Vehicle(const Vehicle &veh){
        cout<<"Copy constructor for Vehicle"<<endl;
    }
};

class Fare{
    public:
    Fare(){
        cout<<"Constructor for Fare"<<endl;
    }
    Fare(const Fare &f){
        cout<<"Copy constructor for Fare"<<endl;
    }
    ~Fare(){
        cout<<"Destructor for Fare"<<endl;
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

class Bus:public Vehicle,public Fare{
    public:
    Bus(){
        cout<<"Constructor for Bus"<<endl;
    }
    ~Bus(){
        cout<<"Destructor for Bus"<<endl;
    }
    Bus(const Bus &b){
        cout<<"Copy constructor for Bus"<<endl;
    }
};
int main(){
    Bus*b = (Bus*)new Vehicle();
    delete b;
    return 0;
}