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
//for searching element in a Linked List
struct Node * Search(struct Node *p,int key){
    while(p!=NULL){
        if(key==p->data)return p;
        else{
            p=p->next;
        }
    }
    return NULL;

}
//for searching recursively
struct Node * RSearch(struct Node *p,int key){
    if(p==NULL)return NULL;
    if(p->data==key)return p;
    else return RSearch(p->next,key);
}
//but to reduce the time when we are searching for the same element next time we have two methods:
//1.Transposition(swap the element with its previous one) but in linked list we dont prefer this one 
//2.Move to first(swap the element with the first one )
struct Node * Searching(struct Node *p,int key){
    struct Node *q=NULL;
    
    while(p!=NULL){
        
    if(p->data==key){
        cout<<p;
        q->next=p->next;
        p->next=first;
        first =p;
    }
        q=p;
        p=p->next;}
}
void Insertion(struct Node *p,int val,int pos){
    //before every thing we have to check the condition for the validity of the position given
    if(pos<0 || pos>Count(p)){
        return ;
    }
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    int i;
    if(pos==0){
        t->data=val;
        t->next=first;
        first=t;
    }
    else if(pos>0){
        for(i=0;i<pos-1 && p;i++){
            p=p->next;
        }if(p){
           
            t->data=val;
            t->next=p->next;
            p->next=t;
        }

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
    for(i=1;i<sizeof(A)/sizeof(A[0]);i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
   
    
}

int main(){
    struct Node *temp;
    create();
    Display(first);
    RDisplay(first);
    Count(first);
    Sum(first);
    cout<<RSum(first);
    cout<<Max(first)<<endl;
    cout<<RMax(first)<<endl;
    temp=Search(first,3);
    if(temp){
        cout<<"Element found"<<temp->data<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    cout<<RSearch(first,4)<<endl;
    Searching(first,4);
    cout<<endl;
    cout<<"Insertion is done here";
    Insertion(first,4,4);
    Insertion(first,6,0);
    Display(first);
}