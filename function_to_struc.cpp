#include <iostream>
#include <stdio.h>

using namespace std;

// int Area(int l,int b){
//     return l*b;
// };
// int main(){
//     int l=10;
//     int b=20;
//     int area = Area(l,b);
//     cout<<area<<endl;

// };

//let us convert the above in terms of structures
struct  Rectangle {
    int length ;
    int breadth;

};
int Area(Rectangle r1){
    r1.length =10;
    r1.breadth =20;
    return (r1.length * r1.breadth); 
};
int Perimeter(Rectangle r2){
    int peri =2*(r2.length + r2.breadth);
    return peri;
}
int main(){
    struct Rectangle r ={20,20};
    int c= Area(r);
    int d= Perimeter(r);
    cout <<"Perimeter of the given rectangle is equal to"<<c<<endl;
    cout <<"Area of the given rectangle is equal to"<<d<<endl;
    
};
