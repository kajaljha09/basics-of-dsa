#include <stdio.h>
#include <iostream>
using namespace std;
struct data{
    int a;
    int c;
    char b;

};
struct data2{
    char d;
    int s;
};
struct data3{
    float f,m;
    
    
};
int main(){
    struct data firstdata;
    cout<<sizeof(firstdata)<<endl;  //the output for this statement is coming to be 12 but character's size is only 1 byte ,this is called "Padding",
                              //the compiler will allocate 4 byte , so that it is easy for our processor to read the entire structure at once
                              //but this is creating a wastage of memory so in order to avoid this problem we can use #pragma pack(1)  or use __attribute__((packed))
    struct data2 seconddata;
    cout<<sizeof(seconddata)<<endl;
    struct data3 thirddata;
    cout<<sizeof(thirddata);
}