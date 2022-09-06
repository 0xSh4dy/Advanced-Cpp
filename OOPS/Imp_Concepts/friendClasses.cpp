/*  A friend class can access private and protected members of other class in which it is 
declared as friend.
*/
#include<iostream>
using namespace std;

class Class1{
    void function_one(){
        cout<<"This is function one"<<endl;
    }
    friend class Class2;
};

class Class2{
    public:
    Class2(){
        Class1 c1;
        c1.function_one();
    }
    void function_two(){
        cout<<"This is function two"<<endl;
    }
};

class Class3{
    public:
    Class3(){
        Class1 c1;
    }
};
int main(){
    Class2 c2;
    return 0;
}