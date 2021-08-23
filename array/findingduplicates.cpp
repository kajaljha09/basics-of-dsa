#include <iostream>
using namespace std;
//this program is for finding the consecutive duplicates
void DisplayDuplicate(int A[],int n){
    int lastDuplicate=0;
    for(int i=0;i<n;i++){
        if (A[i]==A[i+1] && A[i]!=lastDuplicate){
            cout<<A[i]<<" "<<endl;
           
            lastDuplicate=A[i];
                        
        }
    }


}
//to find the number of consecutive duplicates
void NoofDuplicate(int A[],int n){
    //j=i+1 approach
    int j=0;
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1]){
            j=i+1;
            
            while(A[i]==A[j])j++;
            cout<<A[i]<<" is repeated "<<j-i<<" times"<<endl;
            i=j-1;
            
        }
    }

}
//finding duplicates using hashing table in Sorted Array
void HashDuplicate(int A[],int n){
    //find max of the array
    int max=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"max"<<max<<endl;
    int H[max+1]={};
    for(int i=0;i<n;i++){
        H[A[i]]++;
        
    }
    for(int i=0;i<=max;i++){
       
        if(H[i]>1){
            cout<<"Duplicate No is"<<i<<" and it is repeated "<<H[i]<<"times";

        }

    }
}
int main(){
    
    int A[]={2,3,4,5,5,5,6,9,9,9};
    int length=sizeof(A)/sizeof(A[0]);
    
    DisplayDuplicate(A,length);
    NoofDuplicate(A,length);
    HashDuplicate(A,length);
    return 0;
}