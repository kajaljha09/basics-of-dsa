#include <iostream>
using namespace std;
int SingleMissing(int A[],int n,int l){
    int diff=l-0;
    for(int i=0;i<n;i++){
        if((A[i]-i)!=diff){
            return i+diff;
        }

    }
    


}
void MultipleMissing(int A[],int n){
    int l=1;
    int h=17;
    
    int H[h]={};
    for(int i=0;i<n;i++){
        
        H[A[i]]++;
    }
    for(int i=l;i<h;i++){
        if(H[i]!=1){
            cout<<i;
        }
    }


}
int main(){
    int A[]={1,2,3,5,6,7};
    int length=sizeof(A)/sizeof(A[0]);
    int B[]={1,2,4,5,8,9,12,17};  //using hash table method the array need not to be in sorted form
    int len=sizeof(B)/sizeof(B[0]);
    cout<<SingleMissing(A,length,1)<<endl;
    MultipleMissing(B,len);
    return 0;
}