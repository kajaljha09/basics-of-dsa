//call by refreance
//swapping
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 40;
    swap(a, b);
    cout << a <<endl<< b;
};
int swap(int &x, int &y)
{                  //x and y are the refrence to the actual parameters ,they haven't been allocated a
    int temp = x;  //separate memory ..they are just another name for a and b and can also modify them
    x = y;         //but call by refrence is not generally preferred
    y = temp;      //code of that the function is copied inside the main function
}