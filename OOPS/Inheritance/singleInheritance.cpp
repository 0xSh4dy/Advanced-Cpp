// In single inheritance, a class is allowed to inherit only from one class.
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


class Car:protected Vehicle{
    public:
    Car(){
        cout<<"Constructor for Car"<<endl;
    }

    Car(const Car& cr){
        cout<<"Copy constructor for car"<<endl;
    }
    ~Car(){
        cout<<"Destructor for Car"<<endl;
    }

};
int main(){
    Vehicle v1;
    Vehicle v2 = v1;
    return 0;
}