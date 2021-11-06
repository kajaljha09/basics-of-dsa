#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int Partitioned(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    do{
        do{i++;} while(A[i]<=pivot);
        do{j--; }while(A[j]>pivot);
        if(i<j){swap(&A[i],&A[j]);}
    }
    while(i<j);
    swap(&A[l],&A[j]);
    return j;

}
void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=Partitioned(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}
int main(){
    int A[]={1,3,4,5,6,7,INT32_MAX};
    int n;
    n=7;
    int i;
    QuickSort(A,0,n);
    for(i=0;i<n;i++){
        cout<<A[i];
    }
    cout<<endl;
    return 0;

}