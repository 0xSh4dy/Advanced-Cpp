#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int value=0){
        this->value = value;
    }

    void printNumber(){
        cout<<"The number is "<<this->value<<endl;
    }

    bool operator == (const Number &num){
        return this->value == num.value;
    }
    bool operator > (const Number &num){
        return this->value > num.value;
    }
    bool operator < (const Number &num){
        return this->value < num.value;
    }
    bool operator >= (const Number &num){
        return this->value >= num.value;
    }
    bool operator <= (const Number &num){
        return this->value <= num.value;
    }

};

int main(){
    Number n1(100);
    Number n2(100);
    cout<<(n1<n2)<<endl;
    cout<<(n1<=n2)<<endl;
    cout<<(n1>n2)<<endl;
    cout<<(n1>=n2)<<endl;
    cout<<(n1==n2)<<endl;
    return 0;
}