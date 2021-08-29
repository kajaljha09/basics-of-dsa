#include<iostream>
using namespace std;
int Palindrome(string str){
    //what is a palindrome ?
    //when a string is same from both the ends
    //This is could check using different array or in the same array
    //1.Using different string method we will first store the reverse of the string in the other string :
    string str2;
    int i,j;
    for(i=0;str[i]!='\0';i++){
        
    }
    i=i-1;
    for(j=0;i>=0;i--,j++){
        str2[j]=str[i];
    }
    cout<<str2;
    

}
int main(){
    string str="Madam";
    Palindrome(str);
}