#include <iostream>
#include <stdlib.h>
using namespace std ;
struct Array{
    int *A;
    int size;
    int length ;

};
int display(struct Array *a){
    for(int i=0; i<a->length; i++){
        cout<<a->A[i];
    }
}
int insertAtEnd(struct Array *a){
    int element=0;
    cout<<"Enter new element";
    cin>>element;
    a->A[a->length]=element;
    a->length++;
    

}
int insertAtAnyPos(struct Array *a){
    int element=0;
    int pos=0;
    cout<<"Enter pos where you want to insert new element";
    cin>>pos;

    cout<<"Enter new element";
    cin>>element;
    if(pos>=0 && pos<= a->length){
         for(int i=a->length;i>pos;i--){
             a->A[i]=a->A[i-1];

    }

    }
    a->length++;
    a->A[pos]=element;
    display(a);
    
}
int deleteAtAnyPos(struct Array *a){
    int pos=0;
    cout<<"Enter position from which you have to delete the element";
    cin>>pos;
    if(pos >= 0 && pos <= a->length){
        for(int i=pos;i< a->length-1;i++){
            a->A[i]= a->A[i+1];
        }
    };
    a->length--;
    display(a);

}

//modifications in the linear  search using Transposition and movetofront method
int swapping(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;

}
int linearSearch(struct Array *a){
    int element=0;
    cout<<"Enter element to be searched";
    cin>>element;
    for(int i=0;i< a->length;i++){
        
        if(element == a->A[i]){
            swapping(&a->A[i],&a->A[i-1]);
            return i;
        }
    };
    return -1;

    

}
int binarySearch(struct Array a ){
    //using binary search ,our main moto is to find the middle term in the sorted array and then compare the given number with the mid 
    //if the mid is greater than the number then we have to change the highest index with mid - 1
    //and if the mid is smaller than the number then we have to change the lowest index with mid + 1
    //this process should could continue till the lowest becomes greater than highest index ,then the program should stop execution
    int l=0;
    int h=a.length-1;
    int m;
    int num;
    cout<<"Enter number you want to search";
    cin>>num;
    while(l<=h){

        m=(l+h)/2;
        if(num==a.A[m]){
            return m;

        }
        else if(num>a.A[m]){

            return l=m+1;
        }
        else{
            return h=m-1;
        }
    }
    return -1;

}
//using recursion 
int RbinarySearch(int A[],int l,int h, int key){
    int m=(l+h)/2;
    if(key==A[m]){
        return m;
    }
    else if (key<A[m]){
        return RbinarySearch(A,l,m-1,key);
    }
    else{
        return RbinarySearch(A,m-1,h,key);
    }
    return -1;
}


int main(){
    struct Array arr;
    int key;
    cout<<"Enter size of the array";
    cin>>arr.size;
    cout<<"Enter no of elements of array u are entering";
    cin>>arr.length;
    arr.A=new int[arr.size];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
     };
    // display(&arr);
    // insertAtEnd(&arr);
    // insertAtAnyPos(&arr);
    // deleteAtAnyPos(&arr);
    // cout<<linearSearch(&arr);
    cout<<binarySearch(arr)<<endl;

    cout<<"Enter no. you want to search for using binary search (recursion)";
    cin>>key;
    cout<<RbinarySearch(arr.A,0,arr.length,key)<<endl;
    display(&arr);
    delete []arr.A;
    return 0;

}

