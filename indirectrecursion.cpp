#include<iostream>
using namespace std;
//indirect recursion in which one function calls other and other function calls another and that calls again the first one  so as form a cycle
int funB(int n);  //we need to declare the function before calling it otherwise it is going to throw some errors that the called function is out of range
int funA(int n){
    if (n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}
int funB(int n){
    if (n>1){
        cout << n <<endl;
        funA(n/2);
    }
}
int main(){
    int x=20;
    funA(x);
}