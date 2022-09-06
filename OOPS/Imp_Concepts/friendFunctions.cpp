/*
Friendship ain't mutual i.e if B if a friend of A, it doesn't mean that A would be a friend of B.
Friendship is not inherited.
*/

#include<iostream>
using namespace std;

class C2;
class C1{
    
    void secretFunction(){
        cout<<"This is the secret function"<<endl;
    }
    friend void interestingFunc();
    friend int new_func(int);
    friend class C2;
};

class C2:public C1{
    void secretFunction2(){
        cout<<"This is secret function two"<<endl;
    }
    public:
    C2(){
        C1 c;
        c.secretFunction();
    }
};
void interestingFunc(){
    C1 c;
    c.secretFunction();
}

int new_func(int x){
    C1 c;
    c.secretFunction();
    return 0;
}
int main(){
    interestingFunc();
    new_func(1);
    C2 c;

    return 0;
}