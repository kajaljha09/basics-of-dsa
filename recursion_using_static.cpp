#include <iostream>
using namespace std;
int funct(int n){
    static int  x=0;   //declared at the static area one time at compile time and every time it is gonna increase
    if(n>0){
        x++;
        return funct(n-1)+x;
    }
    return 0;
}
int main(){
    int x=10;
    cout<<funct(x)<<endl;
}