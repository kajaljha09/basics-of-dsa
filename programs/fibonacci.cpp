#include <iostream>
using namespace std;
//using iteration
int fibo(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if(n<=1){
        return n;
    }

    for (i = 2; i <=n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    };
    return s;
}
//using recursion
int fiborec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fiborec(n - 2) + fiborec(n - 1);
    }
}

//using memoisation
//in the above recursion same function is called multiple times which is already initialised with some values
//so using memoisation we will call only those function which haven't been initialised before 
//for this we need to declare a global array
int A[100] ={0}; //we have declared an array of 100 elements with each element equal to 0
int fibomemo(int n){
    if( n<=1){
        return n;
    }
    if (A[n]!=0){
        return A[n];
    }
    else{
        A[n]=fibomemo(n-1) + fibomemo(n-2);
        return A[n];
    };
}
int main()
{
    int n = 6;
    cout<< fibo(n) << endl;
    cout<< fiborec(n)<<endl;
    cout<<fibomemo(n)<<endl;
}
