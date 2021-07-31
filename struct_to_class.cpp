#include <stdio.h>
#include <iostream>
using namespace std;
class Rectangle {
    int length ;
    int breadth;

public :       //this is to make the class elements public .....Instead of class we can also write struct but the only difference is in Struct everything is by default public but in class we need to declare that
int Area(){
    length =10;
    breadth =20;
    return (length * breadth); 
};
int Perimeter(){
    length =10;
    breadth =20;
    int peri =2*(length + breadth);
    return peri;
}
};
int main(){
    
    Rectangle r ;
    int c= r.Area();
    int d= r.Perimeter();
    cout <<"Perimeter of the given rectangle is equal to"<<c<<endl;
    cout <<"Area of the given rectangle is equal to"<<d<<endl;
    
};
