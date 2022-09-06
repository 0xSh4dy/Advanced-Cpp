#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int value = 0){
        this->value = value;
    }
    void printNumber(){
        cout<<"The number is "<<this->value<<endl;
    }
    int operator || (int num){
        return this->value || num;
    }
    int operator && (const Number &num){
        return this->value && num.value;
    }
    int operator ! (){
        return !this->value;
    }
};
int main(){
    Number n1(10);
    Number n2(3);
    cout<<(n1||2)<<endl;
    cout<<(n1&&n2)<<endl;
    cout<<(!n1)<<endl;
    return 0;
}