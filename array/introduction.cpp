#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int A[]={1,2,3}; //declaring with initialising without the specifying the size of array
    int A1[5]={1,2}; //it will allocate 5 spaces in the memory and first second are initialised and rest will be zero
    int A2[5]; //only declaring 
    int A3[5]={0}; //all five elements will be zero
    //accessing each element of an array
    //we can use for loop
    for(int i=0; i<sizeof(A)/sizeof(A[0]);i++){
        cout<<A[i]<<endl;
    };
    //rhe syntax for accessing any element of an array is A[i] of i[A]
    //we can also use pointer notation as *(array name plus index )
    cout<<*(A+1)<<endl;
    //how to create array in the heap area 
    //for that we have to use pointers
    //in Cpp we use - [new] and in C we use -[ malloc(sizeof(datatype)) by type casting it to required datatype of pointer]
    int *p ;
    p=new int[5];
    
    cout<<p[4];
    //if we are not using the heap memory then it causes memory leak
    //we can delete that using
    delete []p;  //in CPP

}