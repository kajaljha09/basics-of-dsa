#include <iostream>
using namespace std;
//using iteration
int fact(int n){
    int mul=1;
    if (n==0)return 1;
    for(int i=n; i>=1;i--){
        mul=mul*i;
        
    }
}
int combination(int n,int r){
    int num =fact(n);
    int den =fact(r);
    int def =fact(n-r);
    return (num/(den*def));

}
//using recursion
//Here we will be using Pascals Triangle
int recurcomb(int n ,int r){
    if (r==0 || r==n){
        return 1;
    }
    return recurcomb(n-1,r-1)+recurcomb(n-1,r);
}
int main(){
    int x= 3;
    cout<<combination(4,2)<<endl;
    cout<<recurcomb(4,2);
}