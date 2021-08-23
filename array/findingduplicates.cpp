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
int main(){
    
    int A[]={2,3,4,5,5,5,6,9,9,9};
    int length=sizeof(A)/sizeof(A[0]);
    
    DisplayDuplicate(A,length);
    NoofDuplicate(A,length);
    return 0;
}