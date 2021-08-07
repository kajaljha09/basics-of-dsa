#include <iostream>

using namespace std;
//template class can have any data type as parameter .We need not to declare the datatype before.
template <class T>
class Students{
    private:
    T sub;
    T total;
    public:
    Students(T s,T t){
        sub =s;
        total =t;

    };
    T Percentage(){
        return total/sub;
    };

};
int main(){
    Students<float> stud(5,402);    //here is how we can specify the data type as a template 
    cout<<stud.Percentage()<<endl;
}