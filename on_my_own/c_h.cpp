#include <iostream>

using namespace std;
class base{
    public:
    base(){
        cout << "Default constructor of base class"<<endl;
    }
    base(int b){
        cout << "Parameterized constructor of base class"<<endl;
    }
};
class derived: public base{
    public:
    derived(){
        cout << "hello i am expecting you to call me 2nd time"<<endl;
    }
    derived(int b){
        cout << "I am expecting you"<<endl;
    }

};

int main(){
    derived d1;
    derived d2(9);
}