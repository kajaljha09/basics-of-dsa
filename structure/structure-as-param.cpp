//call by value
//actual parameter cannot be changed this way
#include <stdio.h>
#include <iostream>
using namespace std;
struct node {
    int a ;
    int c;
};
struct nodeArray{
    int num;
    int A[2];
};
int fun(struct node t1){
    cout<<t1.a<<endl;
};
int fun2(struct nodeArray e1){
   cout<<e1.A[1]<<endl;
};
int main(){
    struct node d={2,3};
    struct nodeArray e ={1, { 1,90}};
    fun(d);
    fun2(e);
}
//call by address
//this way the formal parameter has command over the actual one so it can be changed
//Note :Array cannot be passed by Call by value but if it is a part of Structure then it can be passed as we know structure can be passed by call by value




