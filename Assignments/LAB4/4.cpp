// Assume that one constructor initializes data member say num_vehicle, hour, and rate.
// There should be a 10% discount if num_vehicle exceeds 10.
//  Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
using namespace std;
class Vechile
{
private:
    int num_vechile, hour;
    float rate;

public:
    Vechile()
    {
        num_vechile = 0;
        hour = 0;
        rate = 0;
    }
    Vechile(int x, int y, float z)
    {
        num_vechile = x;
        hour = y;
        rate = z;
    }
    Vechile(Vechile &a)
    {
        num_vechile = a.num_vechile;
        hour = a.hour;
        rate = a.rate;
    }

    int total_charge()
    {
        int total = rate * hour * 0.9;

        if (num_vechile > 10)
            return total;
        else
            return rate * hour;
    }
};

int main()
{
    int hour, num_vech;
    float rate;
    cout << "Enter the Vechile number, hour, rate respectively:- " << endl;
    cin >> num_vech >> hour >> rate;
    Vechile obj(num_vech, hour, rate);
    Vechile obj2(obj);
    // displaying the copy constructor
    cout << obj.total_charge() << endl;
    cout << obj2.total_charge() << endl;

    return 0;
}