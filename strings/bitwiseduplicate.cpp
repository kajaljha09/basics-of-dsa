#include <iostream>
using namespace std;
//we are finding duplicates in string whose range of characters is from 0-25
//so for that we should have atleast 26 bits variable to check for each character
//but in compiler it is present as 32 bits or 4 bytes
//which is available in int or long int in Cpp compilers
//here we are creating a long int variable

int bitwiseDuplicate(char str[]){
    long int x=0,h=0;
    for(int i=0;str[i]!='\0';i++){
        x=1;
        x=x<<(str[i]-97);
        if(x & h >0){
            cout<<"duplicate is present "<<str[i] <<endl;
           
        }else{
            h=x | h;
            
        }
    }

}
int main(){
    char str[]="kklkgjgff";
    bitwiseDuplicate(str);

}