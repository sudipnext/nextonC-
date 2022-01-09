#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n %2 == 0){
        cout << "It's even";

    }
    else if(n == 0) {
        cout << "Zero";
       

    }
    else{
         cout << "It's odd";
        
    }
    return 0;
}