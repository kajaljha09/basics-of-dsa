#include<iostream>
using namespace std;
//there are two methods to reverse an array 
//1.Use of two Arrays
//2.Swapping of the numbers
int display(int A[]){
    for(int i=0;i<5;i++){
        cout<<A[i];
    }
}
//use of another array to shift the elements
int Reverse(int A[]){
    int B[5];
    //shifting all the elements of array A into array B
    for(int i=4,j=0;i>=0;i--,j++){
        B[j]=A[i];

    }
    for(int i=0;i<5;i++){
        A[i]=B[i];
    }


}
//using swapping of the elements 
int Reverse2(int A[]){
    int temp;
    for(int i=0,j=4;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;}
    display(A);
}
int main(){
    int A[5]={1,2,3,4,6};
    // Reverse(A);

    // display(A);
    Reverse2(A);

}