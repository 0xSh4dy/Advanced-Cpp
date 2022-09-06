#include<iostream>
using namespace std;

template<typename T> T add(T x,T y){
    return x+y;
}

template<typename type>type multiply(type x, type y){
    return x*y;
}


int main(){
    
    cout<<add(1,2)<<endl;
    cout<<multiply(5.7,4.7)<<endl;

    return 0;
}