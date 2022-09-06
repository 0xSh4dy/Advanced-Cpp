#include<iostream>
#include<vector>
using namespace std;

class Move{
    int *data;
    public:
    Move(int val){
        data = new int;
        *data = val;
        cout<<"Constructor is called for "<<val<<endl;
    }    
    Move(const Move& mv){
        data = new int;
        *data = *mv.data;
        cout<<"Copy constructor called for "<<*mv.data<<endl;
    }
    ~Move(){
        if(data==NULL){
            cout<<"Destructor for NULL"<<endl;
        }
        else{
            cout<<"Destructor for "<<*data<<endl;
            delete data;
        }
    }
};
int main(){
    vector<Move>vec;
    Move m1(10);
    Move m2(20);
    vec.push_back(m1);
    vec.push_back(m2);
    return 0;
}