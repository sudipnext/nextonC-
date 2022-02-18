#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class PinCheck
{
private:
    int pin, settingpin = 0;
    int blocklist[100];
    // Checking pin and returning true if settingpin equals to pin
    int pinCheck(int a)
    {
        if (pin == settingpin)
        {
            return true;
        }
    }

public:
    // setting the pin by setPin
    int setPin(int z)
    {
        settingpin = z;
    }
    // giving the received pin to the pincheck
    int receivedPin(int x)
    {
        pin = x;
        return pinCheck(pin);
    }
};
class Statement
{

private:
    int enquiry, statement;
    int set_enquiry()
    {
    }
    int set_statement()
    {
    }
    int balancededuction()
    {
    }

protected:
    int balance = 60000;

public:
    int give_enquiry(int y)
    {
    }

    int give_statement()
    {
    }
};
class cash : protected Statement
{
private:
    int fastcash, withdrawl;

public:
    int give_fast_cash_info()
    {

        cout << "Enter the Cash you want to withdraw\n";
        cout << "RS 1000\n\n";
        cout << "RS 2000\n\n";
        cout << "RS 3000\n\n";
        cout << "RS 4000\n\n";
        cout << "RS 5000\n\n";
    }
    int give_withdrawl(int amount)
    {
        
        cout << "\nAvailable Balance:- " << balance;
        balance -= amount;
        switch (amount)
        {
        case 1000:
            cout << "\nGenerating. ";
            Sleep(500);
            cout << "\nGenerating..";
            Sleep(500);
            cout << "\nGenerating...";
            Sleep(500);
            cout << "\nRemaining balance is  " << balance;
            cout << "1000 Rs is deducted!\n";
            break;
        case 2000:
            cout << "\nGenerating. ";
            Sleep(500);
            cout << "\nGenerating..";
            Sleep(500);
            cout << "\nGenerating...";
            Sleep(500);
            cout << "\nRemaining balance is  " << balance;
            cout << "\n2000 Rs is deducted!";
            break;
        case 3000:
            cout << "\nGenerating. ";
            Sleep(500);
            cout << "\nGenerating..";
            Sleep(500);
            cout << "\nGenerating...";
            Sleep(500);
            cout << "\nRemaining balance is  " << balance;
            cout << "3000 Rs is deducted!";
            break;
        case 4000:
            cout << "\nGenerating. ";
            Sleep(500);
            cout << "\nGenerating..";
            Sleep(500);
            cout << "\nGenerating...";
            Sleep(500);
            cout << "\nRemaining balance is  " << balance;
            cout << "\n4000 Rs is deducted!";
            break;
        case 5000:
            cout << "\nGenerating. ";
            Sleep(500);
            cout << "\nGenerating..";
            Sleep(500);
            cout << "\nGenerating...";
            Sleep(500);
            cout << "\nRemaining balance is  " << balance;
            cout << "\n5000 Rs is deducted!";
            break;

        default:
            cout << "your balance is "<<balance << amount << " is remaining"<<endl;
            break;
        }
    }
};

int main()
{
    // variable declarations
    int a, b, i, j, p, n, animation = 3, anm2 = 3, sett, amount, paisanikal;
    char s;
    string load = "Loading";
    Statement stment;
    PinCheck check;
    cash csh;
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
    cout << "\nDo you want to set your pin now? Y/N";
    cin >> s;
    if (s == 'Y' || s == 'y')
    {
        cout << "Enter a pin to set?\n";
        cin >> sett;
        check.setPin(sett);
    }
    else
    {
        cout << "Let's start next then\n";
    }

    // choosing screen
    cout << "\n\n--------------Please Choose one with the index-------------\n";
    cout << "\n\n1.FastCash";
    cout << "\t\t\t\t\t\t2.WithDrawl\n";
    cout << "\n3.BalanceEnquiry";
    cout << "\t\t\t\t\t4.MiniStatement\n";
    cout << "\n5.PinChange";

    cout << "\nNote:-If you are unauthorized person please leave immediately all the actions are being recorded!\n";

    // asking for pin
    cout << "Please enter your pin?\n";
    cin >> p;

    // navigating to pin check algorithm
    cout << "Checking pin Please wait\n";
    Sleep(500);
    if (check.receivedPin(p) == true)
    {
        cout << "Enter the number respective the topics?\n";
        cin >> n;
        switch (n)
        {
        case 1:
            csh.give_fast_cash_info();
            cin >> amount;
            csh.give_withdrawl(amount);

            break;
        case 2:
            cout << "Please enter the amount you want to withdraw!";
            cin >> paisanikal;
            csh.give_withdrawl(paisanikal);
            break;

        default:
            break;
        }
    }
}