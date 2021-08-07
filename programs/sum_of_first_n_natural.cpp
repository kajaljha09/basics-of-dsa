#include <iostream>
using namespace std;
// int fun(int n){
//     static int num=0;
//     if (n>0){
//         num= num+n;
//         fun(n-1);
//     }
//         return num;
    
// };
int fun(int n ){
    if (n==0){
        return 0;
    }
    else{
        return fun(n-1)+n;
    }
}
int main(){
    int x=100;
    cout<<fun(x);
}