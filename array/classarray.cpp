#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;

    public:
    Array(){//non parameterised constructor
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int sz){
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array(){
        delete []A;
    }
    void Insert(int index,int num);
    void Display();
    // void Delete(int index);

};
void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
        cout<<endl;
}
void Array::Insert(int index,int num){
    if(index>=0 && index<=length){
        for(int i=length-1 ;i>=index;i--){
            A[i+1]=A[i];


        }
        A[index]=num;
        length++;  
          }
}
int main(){
    Array arr(10);
    arr.Insert(0,3);
    arr.Insert(1,5);
    arr.Insert(2,7);
    arr.Insert(3,8);
    arr.Insert(2,6);
    arr.Display();

}