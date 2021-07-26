#include <stdio.h>
//structures
#include <iostream>
using namespace std;
struct students{
int rollno;
string name;
int marks;
float percentage;
};
int main(){
    struct students sname = { 1 , "Kajal" ,480,96.0 };
    cout<<sname.rollno<<endl;
    cout<<sname.name<<endl;
    return 0;

}