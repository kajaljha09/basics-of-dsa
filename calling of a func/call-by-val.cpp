//call by value
//Swapping of two numbers
#include <stdio.h>
#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp = a;
    a= b;
    b=temp;
    cout<<"first is"<<a<<"second is"<<b<<endl;

};
int main(){
    int c=swap(20,30);
    cout<<c<<endl;
}