#include <iostream>
using namespace std;

template <typename T>
class Vector
{
    T *arr;
    int capacity;
    int current;

public:
    Vector()
    {
        arr = new T[1];
        capacity = 1;
        current = 0;
    }

    void push_back(T data)
    {
        if (current == capacity)
        {
            T *temp = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                temp[i] = arr[i];
            }
            delete arr;
            capacity *= 2;
            arr = temp;
        }
        arr[current] = data;
        current++;
    }
    T get(int index){
        if(index<current && index>=0){
            return arr[index];
        }
        return -1;
    }
    int size(){
        return current;
    }
    void pop_back(){
        current--;
    }
    ~Vector()
    {
        delete[] arr;
    }
};
int main()
{
    Vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.pop_back();


    for(int i=0;i<vec.size();i++){
        cout<<vec.get(i)<<" ";
    }
    return 0;
}