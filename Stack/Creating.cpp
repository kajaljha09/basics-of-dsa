#include <iostream>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *A;
} ;
void push(struct Stack *p, int x)
{
    if(p->top==p->size-1){
        cout<<"Stack overflow";
    }else{
        p->top++;
        p->A[p->top]=x;
    }
}
int pop(struct Stack *p){
    int x=-1;
    if(p->top==-1){
        cout<<"Stack Underflow";
    }else{
        x=p->A[p->top];
        p->top--;
    }
    return x;
}
void create(struct Stack *s){
    cout<<"Enter size";
    s->top=-1;
    cin>>s->size;
    s->A=new int[s->size];
   
}
void Display(struct Stack p){
    for(int i=p.top;i>=0;i--){
        cout<<p.A[i]<<" ";
    }
    cout<<endl;
}
//peek function returns the value at given pos from the top of the stack otherwise returns -1
//here index =top-pos+1 calculated using the relation between the index and pos
int peek(struct Stack s,int pos){
    int x=-1;
    if(s.top-pos+1 <0){
        cout<<"Invalid";
    }
    else{
        x=s.A[s.top-pos+1];
    }
    return x;

}
//to return the top of the stack
int stackTop(struct Stack s){
    if(s.top==-1){
        return -1;
    }
    else{
        return s.A[s.top];
    }
}
int isFull(struct Stack s){
    if(s.top==s.size-1){
        return 1;
    }
    else{
        return 0;

    }
}
int isEmpty(struct Stack s){
    if(s.top==-1)return 1;
    else return 0;
}
int main()
{   struct Stack s;
    create(&s);
    push(&s,5);
    push(&s,9);
    push(&s,8);
    push(&s,9);
    push(&s,9);
    push(&s,8);
    cout<<"The deleted element"<<pop(&s);
    cout<<endl;
    Display(s);
    cout<<stackTop(s);
    cout<<isFull(s);
    cout<<isEmpty(s);
    return 0;
}