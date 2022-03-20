#include <iostream>
using namespace std;
template <typename T, typename U>
class weight{
    private:
    T kg;
    U grams;
    public:
    void getData(T x, U y){
        kg=x;
        grams = y;
    }
    T outData(){
        return kg;
    }
    U outData1(){
        return grams;
    }
};
int main(){
    weight <int, float>obj1;
    obj1.getData(5, 5.5);
    cout << "Value is "<< obj1.outData()<<endl;
    cout << "Value is "<< obj1.outData1()<<endl;
    // weight <float>obj2;
    // obj2.getData(5.5);
    // cout << "Value is :- "<< obj2.outData()<<endl;
    return 0;
}