#include <iostream>
#include <string>
using namespace std;
class Convert{
    private:
    string A;
    
    public:
    Convert(){
        A="kaJaL is my naMe";
    }
      
    void OnlyUpper();
    void OnlyLower();
    void Upper();

};
//this will work only when the whole string is in lower case
void Convert::OnlyUpper(){
    for(int i=0;A[i]!='\0';i++){
        A[i]-=32;
    }
    cout<<A;
}
//this will work only when the whole string is in upper case
void Convert:: OnlyLower(){
    for(int i=0;A[i]!='\0';i++){
        A[i]+=32;
    }
    cout<<A;
}
//this function will check for any lower case element and then it will convert it to upper case
void Convert::Upper(){
    int i=0;
    while(A[i]!='\0'){
        if (A[i]>=65 && A[i]<=90 ){
            i++;

        }
        else if(A[i]>=97 && A[i]<=122){
            A[i]-=32;
            i++;
        }
        else{
            i++;
        }
    }
    cout<<A;
}


int main(){
    Convert c;
    c.Upper();
   
    return 0;
}