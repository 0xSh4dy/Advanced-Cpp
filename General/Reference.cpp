#include<iostream>
using namespace std;

int main(){
    int x[] = {1,2,3};
    int *k = x;
    std::cout << *k++;
    return 0;
}