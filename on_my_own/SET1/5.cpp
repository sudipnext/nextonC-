//Exception handling

#include <iostream>

using namespace std;

int main(){
    int num1, num2, result;
    cout << "Enter two numbers num1 and num2 :- ";
    cin >> num1>> num2;
    try{
        if(num2 != 0){
            result = num1 / num2;
            cout << "The result is "<< result;

        }
        else{
            throw num2;
        }

    }
    catch(int c) // 
    {
    
        cout << "The number you have put cannot be calculated!";
    }
    return 0;
};
class animal{
    //user defined data type
};