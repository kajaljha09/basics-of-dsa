#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no. of rows";
    int n;
    cin>>n;
    int count;
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=1;j<=count ;j++){
            cout<<j;
        }
        cout<<endl;
    }
}