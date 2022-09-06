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
    Move(Move &&source){
        data = new int;
        *data = *source.data;
        cout<<"Move constructor called for "<<*source.data<<endl;
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
    vec.push_back(Move(10));
    vec.push_back(Move(20));

    return 0;
}