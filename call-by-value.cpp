//function calling and parameter passing
//here the below example is call by value 
//Note that formal parameters are not going to change the actual parameters 
#include <stdio.h>
#include <iostream>
using namespace std;
int sum(int a,int b){
    int c = a + b;
    return c;
};
int diff(int a,int b){
    int c = a-b;
    return c;
}
int main(){
    int d=10;
    int e=20;
    int f= sum(d,e);
    int g=diff(e,d);
    cout<<"Sum is "<<f<<endl<<"Diff is "<<g<<endl;
}