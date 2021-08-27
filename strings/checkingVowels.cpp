#include <iostream>
#include <string>
using namespace std;
int main(){
    string A="here you have to find the number of vowels and consonents";
    int count=0,vcount=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]=='a'|| A[i]=='i'|| A[i]=='e'|| A[i]=='o' || A[i]=='u'){
            vcount+=1;
        }
        else if(A[i]>=97 && A[i]<=122 ){
            count+=1;

        }

    }
    cout<<"No. of vowels are "<<vcount<<endl;
    cout<<"No. of consonents are "<<count<<endl;
    return 0;
}