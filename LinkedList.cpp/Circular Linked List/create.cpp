#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*head;

void Create(int A[],int n){
    struct Node *last,*t;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
         t=(struct Node*)malloc(sizeof(struct Node));  //it is going to create a new node everytime
         t->data=A[i];
         t->next=last->next;
         last->next=t;
         last=t;
         

    }


}

void Display(struct Node *p){
    do{
        cout<<p->data<<" ";

        p=p->next;
    }
    while(p!=head);


}
void RDisplay(struct Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data<<" ";
        Display(p->next);

    }
    flag=0;

}
//insertion in circular linked list is of two types :
//insertion at any position 
//insertion before head node
void Insertion(struct Node *p,int pos,int x){
    struct Node *t;
    if(pos==0){          //insertion before head
     t=new struct Node;
     t->data=x;
     if(head==NULL){
         head=t;
         head->next=head;

     }
     else{
         p=head;
         while(p->next!=head){
             p=p->next;
         }
         p->next=t;
         t->next=head;
         head=t;
     }

    }
    else{          //insertion at any position 
       for(int i=0;i<pos-1;i++){
           p=p->next;
       }
       t=new struct Node;
       t->data=x;
       t->next=p->next;
       p->next=t;
    }
}
int main(){
    int A[]={1,2,3,4,5,6,7};
    int n=sizeof(A)/sizeof(A[0]);
    Create(A,n);
    Display(head);
    cout<<"Display the circular linked list using recursion  ";
    RDisplay(head);
    Insertion(head,2,8);   //so basically it is going to insert after the position specified
    Display(head);
}