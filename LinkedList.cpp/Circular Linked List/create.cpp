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
int main(){
    int A[]={1,2,3,4,5,6,7};
    int n=sizeof(A)/sizeof(A[0]);
    Create(A,n);
    Display(head);

    
}