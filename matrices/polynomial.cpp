#include<iostream>
using namespace std;
struct Term{
    int coef;
    int exp;
};
struct Poly{
    int n;
    struct Term *t;
};
int create(struct Poly *p){
    cout<<"enter the number of terms present in the expression";
    cin>>p->n;
    p->t=new Term[p->n];
    for(int i=0;i<p->n;i++){
        cout<<"Coeff ";
        cin>>p->t[i].coef;
        cout<<"Expo";
        cin>>p->t[i].exp;
    }

}
void Display(struct Poly p){
    cout<<"Expression is:  ";
    for(int i=0;i<p.n;i++){
        cout<<p.t[i].coef<<"x^"<<p.t[i].exp<<"+";
    }
}
int main(){
    struct Poly p;
    create(&p);
    Display(p);
    return 0;

}