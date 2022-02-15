#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class PinCheck
{
private:
    int pin;

    int pinCheck()
    {
    }

public:
    int setPin(){

    }
    int receivedPin()
    {
    }

    int giveOutput()
    {

    }
};
class Statement : private PinCheck
{
private:
    int enquiry, statement;
    int set_enquiry()
    {

    }
    int set_statement()
    {


    }

public:
    int give_enquiry(){

    }
    int give_statement(){

    }
};
class cash: public PinCheck{
    private:
    int fastcash, withdrawl;
    public:
    int give_fast_cash_info(){

    }
    int give_withdrawl(){

    }
};


int main()
{
    // variable declarations
    int a, b, i, j, pin, n, animation = 3, anm2 = 3;
    string load = "Loading";

    // Welcome Screen
    cout << "\n-------------------* Welcome to the ATM *-----------------\n";
    // starting animation
    cout << load;
    while (animation > 0)
    {
        cout << ".";
        Sleep(500);
        animation--;
    }
    cout << "\nPreparing System Please Wait";
    while (anm2 > 0)
    {
        cout << ".";
        Sleep(500);
        anm2--;
    }
    //choosing screen
    cout << "\n\n--------------Please Choose one with the index-------------\n";
    cout << "\n\n1.FastCash";
    cout << "\t\t\t\t\t\t2.WithDrawl\n";
    cout << "\n3.BalanceEnquiry";
    cout << "\t\t\t\t\t4.MiniStatement\n";
    cout << "\n5.PinChange";
}