#include<iostream>
using namespace std;
//this also can be solved using two methods:
//one is using index pointer method
//other hash table method - in which we dont need to create an array of 122 size, we just can create an array of 26 size.

int Duplicate(string str){
    int i,j=0;
    for(int i=0;str[i]!='\0';i++){
        int c=1;
        if(str[i]!=-1){
            for(int j=i+1;str[j]!='\0';j++){
                if(str[i]==str[j]){
                    str[j]=-1;
                    c++;

                }
            }
        }
        if(c>1)cout<<str[i]<<"is repeated "<<c<<"times"<<endl;
    }
    return 0;




}
int main(){
    string str="perceptions";
    Duplicate(str);

}