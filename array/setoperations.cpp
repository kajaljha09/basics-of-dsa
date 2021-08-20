#include <iostream>
using namespace std;
//here we are going to use the merge algorithm
int display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<",";
    }
}
int UnionSorted(int A[],int B[],int m,int n){
    int l=m+n;
    int C[l]={};
    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(A[i]>B[j]){
            C[k++]=B[j++];
        }
        else if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else{
            C[k++]=A[i++];
            j++;
        }
    }
    for(;i<m;i++){
        C[k++]=A[i];
    }
    for(;j<n;j++){
        C[k++]=B[j];
    }
    display(C,l);
    
    

}
//Intersection of two arrays:Take common elements from both the arrays
//Sorted arrays
int Intersection(int A[],int B[],int m ,int n){
    
    int C[m]={};
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]>B[j]){
            j++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else{
            C[k++]=A[i++];
            j++;
        }
    }
    display(C,m);


}
//Difference: We have to find the different terms in first array from the second array
int Difference(int A[],int B[],int m,int n){
    int l=m+n;
    int C[l]={};
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]>B[j]){
            j++;
        }
        else if(A[i]<B[j]){
            C[k++]=A[i++];

        }
        else{
            i++;
            j++;
        }

    }
        for(;i<m;i++){
            C[k++]=A[i];
        }
        
        display(C,l);
}
int main(){
    int A[]={1,2,4,5,19,10000};
    int B[]={3,4,5,6,7};
    int m=sizeof(A)/sizeof(A[0]);
    int n=sizeof(B)/sizeof(B[0]);
    UnionSorted(A,B,m,n);
    Intersection(A,B,m,n);
    Difference(A,B,m,n);
    
}