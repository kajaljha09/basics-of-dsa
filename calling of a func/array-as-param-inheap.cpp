#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int fun(int n){
    int *p=new int[n];   //allocating memory in heap area and it can be access through p
    for (int i=0;i<n;i++){
        p[i]=i+1;
        cout<<p[i]<<endl;
    }
    delete []p;  //to deallocate the dynamic memory
};
int main(){
    int n=7;
    fun(n);
}