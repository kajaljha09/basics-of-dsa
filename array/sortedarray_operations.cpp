#include <iostream>
using namespace std;
void display(int A[],int l){  //l will be passed as address in IsSorted and Insert functions
    for(int i=0;i<(l);i++){
        cout<<A[i];
        
    }
}
//this function was to insert elements in the Sorted array 
//so that the resulting array is also sorted

void Insert(int A[],int *l,int n){
    int val;
    cout<<"Enter the value you want to insert";
    cin>>val;
    int i=*l-1;
    if(*l==n)return;
    while( i>=0 && A[i]>val){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=val;
    (*l)++; 
}

 
int IsSorted(int A[]){
    for(int i=0;i<7;i++){
        if(A[i+1]>A[i])return true;
        else return false;
    }
}
    //merging of sorted arrays in such a way so that the merged array is also sorted
    //for that we need to have another array in which we are going to add the elements of the arrays
    //the elements at each index ,we'll compare
int Merge(int B[],int C[],int m,int l){
    int z=m+l;
    int D[z]={};
    int i=0,j=0,k=0;
    while(i<m && j<l){
        if (B[i]>C[j]){
            D[k++]=C[j++];
            
        }
        else{
            D[k++]=B[i++];
        }
    }
    for(;i<m;i++){
        D[k++]=B[i];
    }
    for(;j<l;j++){
        D[k++]=C[j];
    }
    display(D,z);

}
int main(){
    int n,l;
    cout<<"size of array";
    cin>>n;
    cout<<"no. of elements you want to enter";
    //user defined size of array
    int A[n]={};
    cin>>l;
    
    cout<<"Enter you want to enter";

    for(int i=0;i<l;i++){
        cin>>A[i]; 
    }
    Merge(B,C);
    int B[]={1,2,5,6};
    int C[]={3,4,8};
    int m=sizeof(B)/sizeof(B[0]);
    int k=sizeof(C)/sizeof(C[0]);
    Merge(B,C,m,k);


    cout<<IsSorted(A)<<endl;
    Insert(A,&l,n);
    
    display(A,&l);
}