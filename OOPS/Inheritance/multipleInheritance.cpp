// A class can inherit from more than one class

#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"Constructor for Vehicle"<<endl;
    }
    Vehicle(const Vehicle &veh){
        cout<<"Copy constructor for vehicle"<<endl;
    }
    ~Vehicle(){
        cout<<"Destructor for vehicle"<<endl;
    }
};

class FourWheeler{
    public:
    FourWheeler(){
        cout<<"Constructor for FourWheeler"<<endl;
    }
    FourWheeler(const FourWheeler &fw){
        cout<<"Copy constructor for FourWheeler"<<endl;
    }
    ~FourWheeler(){
        cout<<"Destructor for FourWheeler"<<endl;
    }
};

class Car:public FourWheeler,public Vehicle{
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

int main(){
    Vehicle *v = new Car();
    Vehicle* v1 = v;
    delete v;
    return 0;
}