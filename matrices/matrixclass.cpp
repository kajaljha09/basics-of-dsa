#include<iostream>
using namespace std;
class Matrix{
    private:
    int n;
    int *A;
    public:
    Matrix(int n){
        this->n=n;
        A=new int[n];
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();
    ~Matrix(){
        delete []A;
    }

};
void Matrix::Set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}
int Matrix::Get(int i,int j){
    if(i==j)return A[i-1];
    else return 0;
}
void Matrix ::Display(){
    int i,j;
   for(i=0;i<n-1;i++){
       for(j=0;j<n-1;j++){
           if(i==j)cout<<A[i-1]<<" ";
           else cout<<0<<" ";
       }cout<<endl;
   }

}
int main(){
    Matrix m(4);
    m.Set(1,1,7);
    m.Set(2,2,5);
    m.Set(3,3,6);
    m.Get(1,1);
    m.Display();


}