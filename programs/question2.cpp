#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int solution(){
  
    
    int n=1;
    int j=0;
    vector<int> s;
    map<int,string> m;
    m.insert({1,"legal"});
    m.insert({2,"illegal"});
    m.insert({0,"legal"});
    for(auto i :m){
        if(i.second=="legal"){
            s.push_back(i.first);
        }
        while(i.second!="legal"){
            j+=i.first;
        }
        s.push_back(j);
    };
            

      cout<<*max_element(s.begin(), s.end());  
      return 0;
          
 }
    
int main(){
    solution();


}