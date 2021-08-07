#include <iostream>
using namespace std;
//head recursion in which there is no other statement to execute before the function call
//this recursion can be converted to a simple loop but not directly as it can be done in tail recursion
//tail recursion is a type where there is no other statement after the function call
// int funct(int n){
//     if(n>0){
        
//         return funct(n-1);
//         int x=10;
//         x++;
        
       
//     };
// }
// int main(){
//     int x=10;
//     cout<<funct(x);

// }

//tree recursion in which there are more no. of function calls in one function
//here time complexity depends on the no. of function calls 
//and space complexity depends on the no. of activation records

int funct(int n){
    if (n>0){
        cout<<n;
        funct(n-1);
        funct(n-1);
    };
}
int main(){
    int x=3;
    cout<<funct(x);
}