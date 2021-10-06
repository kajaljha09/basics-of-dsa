#include <iostream>
using namespace std;
struct diagonal{
    int A[8];
    int n;
}m;
void Set(struct diagonal *m,int i,int j,int x){
    if(i==j){
        m->A[i-1]=x;
    }
}
int Get(struct diagonal m,int i,int j){
    if(i==j){
        return m.A[i-1];
    }else{
        return 0;
    }
}
int Display(struct diagonal m){
    int i,j;
    for(i=0;i<=m.n-1;i++){
        for(j=0;j<=m.n-1;j++){
            if(i==j)cout<<m.A[i]<<" ";
            else{cout<<0<<" ";}
        }
        cout<<endl;
    }

}
int main(){
    struct diagonal m;
    m.n=4;
    Set(&m,1,1,5);
    Set(&m,2,2,8);
    Set(&m,3,3,9);
     Set(&m,4,4,9);
    cout<<"get ur element from the matrix"<<Get(m,1,1);
    cout<<endl;
    Display(m);
    return 0;

}
