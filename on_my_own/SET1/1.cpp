//Object as a function argument and returning object
#include<iostream>
using namespace std;
class display{
    int x, y;
    public:
    display add(display m, display n){
        display temp;
        temp.x = m.x + n. x;
        temp.y = m.y + n.y;
        return temp;
    }
    void getData(){
        cout << "Enter the value of x";
        cin >> x>> y;
    }
    void result(){
        cout << "The ans are for x:- "<< x<< " and for y :- "<< y<<endl;
    }


};
int main(){
    display obj1, obj2, obj3, obj4;
    obj1.getData();
    obj2.getData();
    obj4 = obj4.add(obj1, obj2);
    obj4.result();
    return 0;

}