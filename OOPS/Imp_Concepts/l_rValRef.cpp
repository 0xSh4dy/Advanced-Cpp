#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &lref = a;
    int &&rref = 10;

    cout<<&lref<<"  "<<lref<<endl;
    rref = 20;
    cout<<&rref<<"  "<<rref<<endl;
    return 0;
}