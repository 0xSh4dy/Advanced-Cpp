#include<iostream>
#include<vector>
using namespace std;

class Number{
    int *value;
    public:
    Number(int value){
        this->value = new int;
        *this->value = value;
        cout<<"Constructor"<<endl;
    }
    ~Number(){
        cout<<"Destructor"<<endl;
    }
    Number(const Number &num){
        cout<<"Copy constructor"<<endl;
        this->value = new int;
        *this->value = *num.value;
    }
    Number(Number &&num){
        cout<<"Move constructor"<<endl;
        value = move(num.value);
    }
};
int main(){
    Number n1(1);
    return 0;
}