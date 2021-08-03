#include <iostream>
using namespace std;
//program to write factorial
int funct(int n){
    if (n==1 || n==0){
        return 1;
    }

   return n*funct(n-1);
    
    

}
int main(){
    int x=2;
    cout<<funct(x);
}

