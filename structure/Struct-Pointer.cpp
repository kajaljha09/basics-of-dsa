//pointers in structures in heap area
#include <iostream>
#include <stdio.h>
#include <stdlib.h>  //to access memory in heap area
using namespace std;
struct student {
    int marks;
    float percentage;
};
int main(){
    struct student *p;
    p=(struct student *)malloc(sizeof(struct student));
    p->marks=10;   //it is similar as writing (*p).marks
    p->percentage=97;
    cout<<p->marks<<endl;
}
