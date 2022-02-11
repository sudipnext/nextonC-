//Write a function that passes two temperatures by reference and sets the larger
// of the two numbers to a value entered by user by using return by reference.
#include <iostream>

using namespace std;
float& display(float &, float &);
int main(){
    float a, b;
    cout << "Enter the two temprs: -- ";
    cin >> a >>b;
    cout << display(a, b);
    return 0;

}
float& display(float &x, float &y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
}