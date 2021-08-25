//finding minimum and maximum in one scan
#include <iostream>
using namespace std;
void maxmin(int A[],int n){
    //initialise the max and min with the first element of array
    int max=A[0];
    int min=A[0];
    //inside forloop we'll check if the max is smaller than A[i] and update it
    //and min is greater than A[i] and update it
    for(int i=0;i<n;i++){
        if(A[i]<min){
            min=A[i];
        }
        else if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"Max value is :"<<max<<" Min value is :"<<min;
    cout<<endl;

}
int main(){
    int A[]={1,2,6,42,9,5,3};
    int n=sizeof(A)/sizeof(A[0]);
    maxmin(A,n);
    return 0;
}
