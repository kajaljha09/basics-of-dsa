#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
   //if we have to create an array inside stack array
   int A[2][2]={{1,2},{3,4}};
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           cout<<"elements of first 2D array are as follows"<<A[i][j]<<endl;
       }
   };
   //creating the rows in stack and the columns in the heap area
   int *B[3] ;//this is creating array of pointers pointing to int .It is the rows 
   B[0]=new int [3];
   B[1]=new int [3];
   B[2]=new int [3];

  
     for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           cout<<B[i][j];
         
       }
   };
//    //creating whole array of 2 dimensions inside heap area
//    int **C;
//    C = new int*[3];
//     C[0]={2,3,5};
//     C[1]={2,3,5};
//     C[2]={2,3,5};
//     for(int i=0;i<3;i++){
//          for(int j=0;j<3;j++){
//            cout<<"elements of third 2D array are as follows"<<C[i][j]<<endl;
//        }
//    }; 

   

}