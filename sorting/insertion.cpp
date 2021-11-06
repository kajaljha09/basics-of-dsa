#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
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
void SelectionSort(int A[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
        }
        swap(&A[i],&A[k]);
    }
}
int main(){
    int A[]={1,4,2,4,2};
    int B[]={3,6,1,2,4};
    int n=sizeof(A)/sizeof(A[0]);
    int n2=sizeof(B)/sizeof(B[0]);
    Insertion(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    SelectionSort(B,n);
    for(int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }
    return 0;
    
}