#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int a=10;
    int *p;
   
    p=(int *)malloc(5*(sizeof(int))); //in C
    
    p[0]=8;p[1]=3;p[2]=8;p[3]=3;p[4]=8;

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;

    }
    int *d;
    d= new int[5]; //memory allocated in heap area ....This way is used in C++ programs
    cout<<d[4];  //this will give us a garbage value ....

    free(d);  //deallocation in heap area .....C lang
    delete []p; //deallocation in heap area ....C++ lang

    
}