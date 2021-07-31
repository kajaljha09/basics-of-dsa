#include <iostream>
using namespace std;
//constructor in c++ is written with the same name as of the class name ...It can be default ie no parameter constructor or with parameter constructor
class Rectangle
{
private:
    int length;
    int breadth;
    int height;

public:
    Rectangle()   //default constructor
    {
        length = 1;
        breadth = 2;
    };
    Rectangle(int l, int b)    //parametric constructor
    {
        length = l;
        breadth = b;
    };
    Rectangle(int l,int b,int h){
        length=l;
        breadth =b;
        height=h;
    };
    
    int Area()          //member of class
    {

        return length * breadth;
    };
    int Volume();
    
    ~Rectangle (){
        cout<<"  destructor";
    };

    
};

int Rectangle :: Volume(){
     return length*breadth*height;
};


int main()
{
    Rectangle r;   //object declaration       //default constructor
    Rectangle r1(10, 20); //parametric constructor
    Rectangle r3(10,20,20);
    cout <<"Area"<< r.Area() << endl;
    cout<<"Area is" << r1.Area()<<endl;
    cout <<"Volume is "<<r3.Volume()<<endl;


};