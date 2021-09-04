#include<iostream>
#include<stdlib.h>

using namespace std;
struct Node{
    int data;
    struct Node *next;

}*first;
int Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }

}
int create(){
    int i=0;
    int A[4]={3,2,4,6};
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=0;i<sizeof(A)/sizeof(A[0]);i++){
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
}