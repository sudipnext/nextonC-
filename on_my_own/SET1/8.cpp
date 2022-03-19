#include <iostream>
using namespace std;
void rethrow_demo()
{
    try
    {
        throw "hello";
    }
    catch (char *x)
    {
        cout << "Caught exception"<<x;
        throw;
    }
}
int main(){
    cout << "Main started"<<endl;
    try{
        rethrow_demo();
    }
    catch( const char *){
        cout << "Caught exception inside main"<<endl;
    }
    cout << "main end";
    return 0;
}