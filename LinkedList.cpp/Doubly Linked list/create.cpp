#include<iostream>
using namespace std;
struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
}*first;
void Create(int A[],int n){
    struct Node *t,*last;
    int i;
    first=new struct Node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new struct Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void Delete(struct Node *p,int pos){
    
    p=first;
    if(pos==1){
        first=first->next;
        if(first)first->prev=NULL;
        delete p;

    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next) p->next->prev=p->next;
       
        delete p;

    }


}
int main(){
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    Create(A,n);
    cout<<"Length of the Doubly linked list is  "<<length(first)<<endl;
    Display(first);
    Delete(first,5);
    cout<<"Deleted node from the given linked list is ";
    Display(first);

}