// Create a class called carpark that has int data member for car id, int data member for charge/hour,
//  and float data member for the parked time. Make functions to set data members and show the charges 
// and parked hours of the corresponding car id. Make functions for setting and showing the data members.
//  Member function should be called from other functions.

#include <iostream>
using namespace std;
class carpark{
    private:
    int id, chargeperhr;
    float parkedtime;
    public:
    void setData(int x, int y, float z){
        id = x;
        chargeperhr = y;
        parkedtime = z;

    }
    void showData(){

        cout <<"For this "<< id<<endl;
        cout << "The toal charges is" << int(parkedtime) * chargeperhr <<endl;        

    }
};

int main(){
    carpark t;
    int a, b;
    float c;
    cout << "Enter the car id";
    cin >> a;
    cout << "Enter charger per hour";
    cin >> b;
    cout << "Enter parked time";
    cin >> c;
    t.setData(a, b, c);
    t.showData();


}
