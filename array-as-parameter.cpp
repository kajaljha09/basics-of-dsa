//Array can be passed as parameter using Call by add and call by refrence only, not by call by value
#include<stdio.h>
#include<iostream>
using namespace std;
void fun(int A[],int n){    // when A(base address) is written with the []sq brackets it is called pointer to an array
                               //we can also write * in place of []...but [] is specifically pointing to an array
    for(int i =0; i<n;i++)
    cout<<A[i]<<endl;
}
int main(){
    int A[]={1,2,3,4};
    int n=4;
    fun (A,n);    //the name of an array is used to store the base address
    for(int i =0; i<n;i++)   //we are not able to use here for each loop
    cout<<A[i]<<endl;

};
