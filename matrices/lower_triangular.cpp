#include <iostream>
using namespace std;
struct Matrix{
    int *A;
    int n;
};
//Row Major
void SetR(struct Matrix *m,int i,int j,int x){
    if(i>=j){
        m->A[i*(i-1)/2+j-1]=x;
    }
}
int GetR(struct Matrix m,int i,int j){
    if(i>=j){
        return m.A[i*(i-1)/2+j-1];
    }
    else{
        return 0;
    }
}
void DisplayR(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){cout<<m.A[i*(i-1)/2+j-1]<<" ";}
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}
//Column Major
void SetC(struct Matrix *m,int i,int j,int x){
    if(i>=j){
        m->A[m->n*(j-1)-(j-2)*(j-1)/2+(i-j)]=x;
    }
}
int GetC(struct Matrix m,int i,int j){
    if(i>=j){
        return m.A[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)];
    }
    else{
        return 0;
    }
}
void DisplayC(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;j++){
        for(j=1;j<=m.n;j++){
            if(i>=j){cout<<m.A[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)]<<" ";}
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}
int main(){
    struct Matrix m;
    int i,j,x;
    cout<<"Enter the dimension ";
    cin>>m.n;
    m.A=new int[m.n*(m.n+1)/2];
    cout<<"Enter all the elements"<<endl;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            cin>>x;
            SetR(&m,i,j,x);
        }
        cout<<endl;
    }
    DisplayR(m);
    cout<<GetR(m,1,1);
    cout<<"Enter all the elements"<<endl;
     for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            cin>>x;
            SetC(&m,i,j,x);
        }
        cout<<endl;
    }
    DisplayC(m);
    cout<<GetC(m,1,1);

}