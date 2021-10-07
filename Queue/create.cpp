#include <iostream>
using namespace std;
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(Queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"Queue is full";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(Queue *q){
    int x=-1;
    if(q->front ==q->rear){
        cout<<"Queue is empty";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;

}
void Display(struct Queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<" ";
    }
}
int main(){
    struct Queue q;
    cout<<"enter size  :";
    cin>>q.size;
    q.Q=new int[q.size];
    q.front=q.rear=-1;
    enqueue(&q,2);
    enqueue(&q,7);
    enqueue(&q,5);
    dequeue(&q);
    Display(q);
}