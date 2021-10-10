#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
void Bubble(int A[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-i-1;j++){
            if(A[j] > A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)break;  //if the array is already sorted then the outer loop should not be created
    }
}
int main(){
    int A[]={9,9,5,4,5,6,8};
    int n=sizeof(A)/sizeof(A[0]);
    Bubble(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}