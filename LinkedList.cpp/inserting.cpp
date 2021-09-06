#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    struct Node *next;
    int data;
    
}*first;
int Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}

int Insert(struct Node *p,int val){
    struct Node *t,*last;
    
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=val;
    t->next=NULL;
    
    if(first==NULL){  //if it is empty ie linked list not created yet
       first=t;
       last=t;
    }
    else {
        last->next=t;
        last=t;
     

    }



}
//insertion in sorted linked list
int sortedInsertion(struct Node *p,int val){
    struct Node *q=NULL;
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node *));
    t->data=val;
    t->next=NULL;
    
    if(first==NULL){        //if the linked list is totally empty
        first=t;

    }
    else{while(p!=NULL && p->data<val){
        q=p;
        p=p->next;
    }
    if(p==first){         //if there is only one node in a linked list
        t->next=first;
        first=t;

    }
      else{                  //for inserting in between or at the end of the linked list
          t->next=q->next;
           q->next=t;
   }
    }
}
int main(){
    Insert(first,5);
    Insert(first,8);
    Insert(first,10);
    Insert(first,16);
    sortedInsertion(first,11);
    sortedInsertion(first,12);
    sortedInsertion(first,6);
    sortedInsertion(first,4);
    sortedInsertion(first,18);
    Display(first);
    return 0;
}