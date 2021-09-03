#include <iostream>
#include <vector>
using namespace std;
//Two strings are said to be anagram if the characters present in both the strings are equal no matter at what index they are present but they 
//should have same numbers of characters in both the strings

//using hash table
//we will increament element of Hash which was previously zero to 1 using first string and againg decreament the elements using the second string 
//we wiil check that the elements of hash should not be less than zero

int HashAnagram(){
    string str1="medicala";
    string str2="decimale";
   
    vector <int>H (26,0);
    int i,j;
    if(str1.length()==str2.length()){
    for(i=0;str1[i]!='\0';i++){
        H[str1[i]-97]++;
    }
    for(j=0;str2[j]!='\0';j++){
        H[str2[j]-97]--;
        if(H[str2[j]-97]<0){
            cout<<"Its not Anagram";
            break;
        }
    }
    if(str2[j]=='\0'){
        cout<<"its Anagram";
    }
    }else{
        cout<<"Its not anagram"; //when the length of both the strings differs its prints that it is not an anagram
    }
    return 0;

}
int main(){
    HashAnagram();

}