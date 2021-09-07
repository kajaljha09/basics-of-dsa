#include <iostream>
using namespace std;
//this program is for finding the consecutive duplicates in Sorted array
void DisplayDuplicate(int A[],int n){
    int lastDuplicate=0;
    for(int i=0;i<n;i++){
        if (A[i]==A[i+1] && A[i]!=lastDuplicate){
            cout<<A[i]<<" "<<endl;
           
            lastDuplicate=A[i];
                        
        }
    }
}
//to find the number of consecutive duplicates
//time complexity is order of N O(N);
void NoofDuplicate(int A[],int n){
    //j=i+1 approach
    int j=0;
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1]){
            j=i+1;
            
            while(A[i]==A[j])j++; //this is not taking a separate time
            cout<<A[i]<<" is repeated "<<j-i<<" times"<<endl;
            i=j-1;
            
        }
    }

}
//finding duplicates using hashing table in Sorted Array
void HashDuplicate(int A[],int n){
    //find max of the array
    int max=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"max"<<max<<endl;
    int H[max+1]={};
    for(int i=0;i<n;i++){
        H[A[i]]++;
        
    }
    for(int i=0;i<=max;i++){
       
        if(H[i]>1){
            cout<<"Duplicate No is"<<i<<" and it is repeated "<<H[i]<<"times";

        }

    }
}

//finding duplicates in Unsorted Array
void UnsorDupl(int A[],int n){
    //using the index pointer approach
    //and the elements found to be duplicates of any number equate it to -1
    //then move towards other elements which are equal to -1
    //here two loops will be used which is going to take order of N^2 time complexity
    for(int i=0;i<n-1;i++){  //it should go upto second last element
        int c=1;
        if(A[i]!=-1){
            for(int j=i+1; j<n; j++){  
                if(A[i]==A[j]){
                    c++;
                    A[j]=-1;
                }
            }
            if(c>1){
                cout<<A[i]<<" is repeated "<<c<<" times";
                cout<<endl;
            }
        }

    }
}
int findingSum(int A[],int n,int k){
    //it will follow the same algorithm
    //as above
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(A[i]+A[j]==k ){
                cout<<"Elements which are equal to the sum are:"<<A[i]<<" and "<<A[j];
                cout<<endl;
                A[i]=-1;
            }

        }
        
    }
}
//in sorted array, finding the pair of index whose sum is equal to the target
void sum(int numbers[],int n,int target){
     
        int i=0,j=n-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                cout<<i+1<<","<<j+1;
                i++;
                j--;
            }
            else if(numbers[i]+numbers[j]<target){
            i++;
            }
            else{
                j--;
            }
       
}
}
int main(){
    // Sorted array
    int A[]={2,3,4,5,5,5,6,9,9,9};
    int length=sizeof(A)/sizeof(A[0]);
    //Unsorted array
    int B[]={1,6,4,3,5,6,5,5,8,6,9,5,9,0,9,9,7,3,2};
    int len=sizeof(B)/sizeof(B[0]);
    DisplayDuplicate(A,length);
    NoofDuplicate(A,length);
    HashDuplicate(A,length);
    
    UnsorDupl(B,len);
//    finding sum 
    int C[]={2,4,6,5,7,3,9};
    int l=sizeof(C)/sizeof(C[0]);
    int k;

    cout<<"Enter the value of K";
    cin>>k;
    findingSum(C,l,k);
    // sum
    int D[]={2,9,20,11};
    int n=sizeof(D)/sizeof(D[0]);
    sum(D,n,11);
    return 0;

}