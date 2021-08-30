#include <iostream>
using namespace std;
int reverse(string str){
    int i,j;
    char t;
    for(i=0;str[i]!='\0';i++){}
    i=i-1;
    for(j=0;i>j;i--,j++){
        t=str[j];
        str[j]=str[i];
        str[i]=t ;
    }
    cout<<str;
}
int main(){
    string str="kajal";
    reverse(str);

}