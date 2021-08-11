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
int linearSearch(struct Array *a){
    int element=0;
    cout<<"Enter element to be searched";
    cin>>element;
    for(int i=0;i< a->length;i++){
        if(element == a->A[i]){
            return i;
        }
    };
    return -1;


}


int main(){
    struct Array arr;
    cout<<"Enter size of the array";
    cin>>arr.size;
    cout<<"Enter no of elements of array u are entering";
    cin>>arr.length;
    arr.A=new int[arr.size];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    };
    display(&arr);
    insertAtEnd(&arr);
    insertAtAnyPos(&arr);
    deleteAtAnyPos(&arr);
    linearSearch(&arr);

    delete []arr.A;
    return 0;

}

