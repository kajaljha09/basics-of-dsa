#include<iostream>
using namespace std;
    //what is a palindrome ?
    //when a string is same even it has been reversed
    //This we could check using different string or in the same string
    //1.Using different string method ,we will first store the reverse of the string in the other string 
    //and the compare both the strings
    //2.Using the same string method, by using two index pointers from 0th index and last index
char *UpperCasing(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
        return str;
}
string FirstMethod(){
    char str[]="maDaM";
    char str2[10];
    int i,j;
    string result;
    for(i=0;str[i]!='\0';i++){} //this statement is to take the index pointer at the end of the string
    i=i-1;
    for(j=0;i>=0;i--,j++){
        str2[j]=str[i];           //creating a new string of reversed values of the given string
    }
    UpperCasing(str);
    UpperCasing(str2);
    for(int k=0,l=0; str[k]!='\0' && str2[l]!='\0';k++,l++){
        if(str[k]==str2[l]){
            result ="it is a palindrome";
            
        }
        else{
            result="it is not a palindrome";
        }   
    }
            return result;
}
string SecondMethod(){
    char str[]="maDaM"; //also consider those cases when the string is having characters of different cases
    int i,j;            //then make the whole string either upper case or lower case
    UpperCasing(str);
    string result;
    for(j=0;str[j]!=0;j++){}
    j=j-1;
    for(i=0;i<j;j--,i++){
        if(str[i]==str[j]){
            result="It is palindrome";
        }
        else{
            result="Its not a palindrome";
        }

    }
        return result;

}
int main(){
    cout<<FirstMethod()<<endl;
    cout<<SecondMethod();
}