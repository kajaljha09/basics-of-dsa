#include<iostream>
using namespace std;
int funB(int n);
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