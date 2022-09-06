#include<iostream>
using namespace std;

int main(){
    try{
        throw 100;
    }
    catch(char exp){
        cout<<"Char: exception caught"<<endl;
    }
    catch(...){
        cout<<"This is the catch all block"<<endl;
    }
    return 0;
}