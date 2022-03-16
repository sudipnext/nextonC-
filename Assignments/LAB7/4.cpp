// Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle.
//  Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.
#include <iostream>
using namespace std;
class Vehicle{
    public:
    virtual void speed(){};

};
class Bus: public Vehicle{
    public:
    void speed(){
        cout << "50km/hr"<<endl;
    }

};
class Car: public Vehicle{
    public:
    void speed(){
        cout << "70km/hr"<<endl;
    }

};
class Bike:public Vehicle{
    public:
    void speed(){
        cout << "80km/hr";
    }
};
int main(){
    Car c, *cptr;
    Bike bk, *bkptr;
    Bus b, *bptr;
    Vehicle v, *vptr;
    vptr = &c;
        vptr = &c;
    cptr = dynamic_cast<Car *>(vptr);
    if(cptr){
        cout << "The cast to derived pointer cptr is sucessfull!";
    }else{
        cout <<"unsucessfull";
    }
    
    
    cout << typeid(*vptr).name();
    cout << typeid(c).name();
    cout << typeid(b).name();
    

}
