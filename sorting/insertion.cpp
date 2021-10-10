#include<iostream>
using namespace std;
void Insertion(int A[],int n){
    int j;
    int x;
    for(int i=1;i<=n-1;i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }

}
int main(){
    int A[]={1,4,2,4,2};
    int n=sizeof(A)/sizeof(A[0]);
    Insertion(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}