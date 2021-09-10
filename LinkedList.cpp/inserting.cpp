#include <iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
struct Node{
    struct Node *next;
    int data;
    
}*first;
void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    
}

void Insert(struct Node *p,int val){
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
void sortedInsertion(struct Node *p,int val){
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
//Delete any node of Linked List
void Delete(struct Node *p,int pos){
    int k,i;
    struct Node *q;
    if(pos==1){
        k=p->data;
        first=p->next;
        delete p;

    }
    else{
        for(i=0;i<pos-1 && p;i++){
            q=p;
            p=p->next;
        }
        k=p->data;
        q->next=p->next;
        delete p;
        cout<<"deleted node is having value "<<k<<endl;
}
}
int CheckSorted(struct Node *p){
    int m=INT_MIN;
    while(p){
        if(p->data <m){
            return false;
        }
        m=p->data;
        p=p->next;
    }
    return true;

    
}  
//Reverse a linked list
void Reverse(struct Node *p){
    vector<int>A;
    int i=0;
    p=first;
    while(p!=NULL){
        A.push_back(p->data);
        p=p->next;
        i++;   
    }
    p=first;
    i--;  //because at the end of the loop i is out of the array
    while(p!=NULL){
        p->data=A[i];
        p=p->next;
        i--;
    }
  
}



int main(){
    int t=0;
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
    Delete(first,1);  //for position 1
    Delete(first,4);   //for any position
    t=CheckSorted(first);
    if(t)cout<<"Linked LIst is  sorted";
    else cout<<"linked list is not sorted";
    cout<<endl;
    cout<<"THE REVERSED LINKED LIST IS  " ;
    Reverse(first);
    Display(first);
    return 0;
}