#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int n;
    cout<<"enter upto what number you have to find the fibo pattern";
    cin>>n;
  
    for(int i=0;i<n;i++){
        a=0;
        b=1;
        cout<<b;
        for(int j=0;j<i;j++){
            c=a+b;
            a=b;
            b=c;
            cout<<c;
        }
        cout<<endl;

    }
    return 0;
}