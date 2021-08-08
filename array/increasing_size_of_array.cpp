//size of an array cannot be increased or decreased
//Statically or Dynamically
//there are alternate methods to do so

//in dynamic area
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p;
    p=new int[3];
    p[0]=4;
    p[1]=3;
    p[2]=5;
    int *q;
    q=new int[10];
    for(int i=0;i<10;i++){
        q[i]=p[i];
    };
    //now the first three elements of q are equal to all the elements of p
    //and rest are initialised to zero
    //we need to deallocate the array pointed by p
    //and make p as the pointer of array pointed by q
    //make q a null pointer



    delete []p;
    p=q;
    q=NULL;
    for(int i=0;i<10;i++){
        cout<< p[i]<<endl;
    };
    



}
