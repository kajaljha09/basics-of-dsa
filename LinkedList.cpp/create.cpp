#include<iostream>
#include<stdlib.h>

using namespace std;
struct Node{
    int data;
    struct Node *next;

}*first;

//iterative display
int Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}

//recursive display
int RDisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
    
}
//couting the number of nodes in a linked list 
int Count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    cout<<endl;
    cout<<c<<endl;

}
//sum of elements in Linked List
int Sum(struct Node *p){
    int sum=0;
    while(p!=NULL){
        sum=sum+p->data;
        p=p->next;
    }
    cout<<sum<<endl;

}
//recursive sum of elements of linked LIst
int RSum(struct Node *p){
    
    if(p==NULL){
        return 0;
    }
    else{
        return RSum(p->next)+p->data;
    }
}
//finding maximum in the linked List
int Max(struct Node *p){
    int m=INT_MIN;
    while(p){
        if(p->data > m){
            m=p->data;
        }else{
            p=p->next;
        }
        
    }
    cout<<endl;
    return m;
}
//finding max recursively
int RMax(struct Node *p){
    int x=0;
    if(p==NULL){
        return INT_MIN;
    }

        x=RMax(p->next);
        if(x>p->data)return x;
        else return p->data;


}
int create(){
    int i=0;
    int A[4]={3,2,4,6};
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<sizeof(A)/sizeof(A[0]);i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
   
    
}

int main(){
    
    create();
    Display(first);
    RDisplay(first);
    Count(first);
    Sum(first);
    cout<<RSum(first);
    cout<<Max(first)<<endl;
    cout<<RMax(first);
}