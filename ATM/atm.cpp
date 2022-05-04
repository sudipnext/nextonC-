// including the necessary header files
#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>
using namespace std;
// created a pincheck class which checks the pin entered by the user
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
protected:
    string billdispense;
    int balance = 60000;
    time_t now = time(0);
    char *date = ctime(&now);

public:
    int give_enquiry()
    {
        cout << "\nYou have currently Rs. " << balance << " in your account at:- " << date << endl;
    }

    int give_statement(int a)
    {

        cout << "Do you want bill dispense? Y/N\n";
        cin >> billdispense;
        if (billdispense == "Y" || billdispense == "y")
        {
            cout << "Bill\n";
            cout << "+-------------------------------------------------------+" << endl;
            cout << "|                    Statement                          |" << endl;
            cout << "+---+-------------------+-------------------------------+" << endl;
            cout << "| 1 | Date              | " << date << "                |" << endl;
            cout << "+---+-------------------+-------------------------------+" << endl;
            cout << "| 2 | Withdrawl Amount  | " << a << "                   |" << endl;
            cout << "+---+-------------------+-------------------------------+" << endl;
            cout << "| 3 | Account Balance   |  " << balance << "            |" << endl;
            cout << "+---+-------------------+-------------------------------+" << endl;
            cout << "| 4 | Available Balance |  " << balance - a << "        |" << endl;
            cout << "+---+-------------------+-------------------------------+" << endl;
            cout << "|                 Thank You !                           |" << endl;
            cout << "+---+-------------------+-------------------------------+" << endl;
        }
    }
};
class cash : public Statement
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
        give_statement(amount);
            cout << "\nBalance:- " << balance;
            balance -= amount;
            cout << "\nGenerating.";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
        switch (amount)
        {
        case 1000:
            cout << "\nRemaining balance is  Rs" << balance;
            cout << "\nRs1000 Rs is deducted!\n";
            break;
        case 2000:
            cout << "\nRemaining balance is  " << balance;
            cout << "\n2000 Rs is deducted!";
            break;
        case 3000:
            cout << "\nRemaining balance is  " << balance;
            cout << "3000 Rs is deducted!";
            break;
        case 4000:
            cout << "\nRemaining balance is  " << balance;
            cout << "\n4000 Rs is deducted!";
            break;
        case 5000:
            cout << "\nRemaining balance is  " << balance;
            cout << "\n5000 Rs is deducted!";
            break;

        default:
            cout << "\nyour balance is Rs. " << balance << ". Rs. " << amount << " is remaining" << endl;
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
    cout << "\t\t\t\t\t4.PinChange\n";

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
        case 3:
            stment.give_enquiry();
            break;
        case 4:
            cout << "Enter the new pin?\n";
            cin >> p;
            check.setPin(p);
            cout << "Pin set sucessfully!\n";
            break;
        }
    }
    else
    {
        cout << "Incorrect Pin!\n";
        cout << "You are unauthorized person Please contact your bank!\n";
    }
}