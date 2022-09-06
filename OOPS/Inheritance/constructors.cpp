#include<iostream>
using namespace std;

class Numbers{
    int x = 0;
    public:
    Numbers(int x){
        this->x = x;
        cout<<"............................................................"<<endl;
        cout<<"Constructor x = "<<this->x<<endl;        
    }
    Numbers(int x, int y){
        this->x = x+y;
        cout<<"............................................................"<<endl;
        cout<<"Constructor for Numbers x = "<<this->x<<endl;  
    }
    Numbers(int x, int y, int z){
        this->x = x+y+z;
        cout<<"............................................................"<<endl;
        cout<<"Constructor for Numbers x = "<<this->x<<endl;  
    }
   
    ~Numbers(){
        cout<<"Destructor for Numbers x = "<<x<<endl;
        cout<<"............................................................"<<endl;
    }
};


class Point{
    private:
    int x,y;
    public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
        cout<<"............................................................"<<endl;
        cout<<"Calling constructor for point: x = "<<x<<" | y = "<<y<<endl;
    }
    Point(const Point &pt){
        x = pt.x;
        y = pt.y;
        cout<<"............................................................"<<endl;
        cout<<"Calling copy constructor for point: x = "<<x<<" | y = "<<y<<endl;
    }
    void printPoint(){
        cout<<"............................................................"<<endl;
        cout<<"x = "<<x<<"| y = "<<y<<endl;
        cout<<"............................................................"<<endl;
    }
    ~Point(){
        cout<<"............................................................"<<endl;
        cout<<"Calling destructor for Point"<<endl;
    }
};
int main(){

    Numbers num1(1);
    Numbers num2(1,2);
    Numbers num3(1,2,3);
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    Point p1(10,15);
    Point p2 = p1;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    return 0;
}