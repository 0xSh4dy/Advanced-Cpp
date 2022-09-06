#include<iostream>
using namespace std;

template <typename T>

T maxVal(T x, T y){
    return x>y?x:y;
}


int main(){
    int x1 = maxVal(1,2);
    float x2 = maxVal(1.5,7.5);
    cout<<x1<<endl;
    cout<<x2<<endl;
    return 0;
}