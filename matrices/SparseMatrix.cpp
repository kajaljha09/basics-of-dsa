#include <iostream>
using namespace std;
struct Sparse{
    int m;
    int n;
    int num;   //number of non-zero elements
    struct Element *ele ;

};
struct Element{
    int i;
    int j;
    int e;
};
int Create(struct Sparse *s){
    cout<<"Enter number of rows";
    cin>>s->m;
    cout<<"Enter number of columns";
    cin>>s->n;
    cout<<"Enter total number of non-zero elements";
    cin>>s->num;
    cout<<"enter the elements";
    s->ele = new Element[s->num];
    for(int i=0;i<s->num;i++){
        cout<<"row index element";
        cin>>s->ele[i].i;
        cout<<"col index element";
        cin>>s->ele[i].j;
        cout<<"element";
        cin>>s->ele[i].e;

    }
}
void Display(struct Sparse s){
    int i,j,k=0;
    for(int i=1;i<=s.m;i++){
        for(int j=1;j<=s.n;j++){
            if(i==s.ele[k].i && j==s.ele[k].j){
                cout<<s.ele[k++].e<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    struct Sparse s;
    Create(&s);
    Display(s);
    return 0;


}