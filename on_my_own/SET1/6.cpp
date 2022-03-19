#include <iostream>
using namespace std;

int main(){
    char s[]="Out of range";
    char myarray[10];
    try{
        for(int i=0; i<=10; i++){
            if( i > 9) throw s;
        }
    }
    catch(char x[]){
        cout << "Exception:- "<< x;
    }
    return 0;
}
