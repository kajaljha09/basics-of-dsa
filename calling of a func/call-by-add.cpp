//Call by address
//it will affect the actual parameters too
//Swapping
#include <stdio.h>
#include <iostream>
using namespace std;
int swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
};
int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << "First one is " << a << "second one" << b << endl;
}
