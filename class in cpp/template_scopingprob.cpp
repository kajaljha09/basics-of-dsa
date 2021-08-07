#include <iostream>
using namespace std;
//template classes are generic classes they support any data type
template <class T>
class Triangle{
    private :
    T base;
    T height;
    public:
    Triangle(T b,T h){
        base=b;
        height =h;
    };
    T area();
    
};
template <class T>
T Triangle<T>:: area(){     //scope resolution
    
    return (base*height)/2;
};
int main(){
    Triangle<float> Area(3,21);
    cout << Area.area()<<endl;
}
