#include <iostream>
#include<string>
using namespace std;
//program to calculate the number of words in a string 
int main(){
    string A="Here you  have to count the number of   spaces";
    int word=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]!=' ' ){ //the second condition will check if there is more than one blank spaces in between
            word++;                    //this extra space is called whitespaces
        }
    }
    cout<<word+1;
    return 0;
}