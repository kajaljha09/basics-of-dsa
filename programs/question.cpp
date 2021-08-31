#include<iostream>
#include<vector>
using namespace std;

vector<string> str(){
    vector<string> string_array ;
    string_array.push_back("hello");
    string_array.push_back("kajal");
    int i,j;
    char t;
    string result;
    vector<string> s;
    for(i=0;i<string_array.size();i++){
        string ori=string_array[i];
        for(j=0;string_array[i][j]!='\0';j++){}
        j=j-1;
      
        int k=0;
        while(k<=j){
            if(string_array[i][k]>string_array[i][j]){
                t=string_array[i][k];
                string_array[i][k]=string_array[i][j];
                string_array[i][j]=t;
                k++;
                j--;
               
            }
            else{
                j--;
            }
            
        }
        if(ori==string_array[i]){
            result="NO";
            s.push_back(result);
        }else{
            result="YES";
            s.push_back(result);
        }
        

       
        
    }
    
   return s;


}
int main(){
    str();
}