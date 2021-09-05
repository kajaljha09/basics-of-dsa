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
int main(){
    Insert(first,7);
    Insert(first,8);
    Insert(first,10);
    Insert(first,6);
    Display(first);
    return 0;
}