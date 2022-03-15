#include <iostream>
#include <cstring>
    using namespace std;
class Musicians
{
protected:
    char instrument[15][15];

public:
    void string()
    {
        strcpy(instrument[0], "veena");
        strcpy(instrument[1], "guitar");
        strcpy(instrument[2], "sitar");
        strcpy(instrument[3], "sarod");
        strcpy(instrument[4], "mandolin");
    }
    void wind()
    {
        strcpy(instrument[0], "flute");
        strcpy(instrument[1], "clarinet");
        strcpy(instrument[2], "saxophone");
        strcpy(instrument[3], "nadhaswaram");
        strcpy(instrument[4], "picco");
    }
    void perc()
    {
        strcpy(instrument[0], "tabla");
        strcpy(instrument[1], "mridangam");
        strcpy(instrument[2], "bangos");
        strcpy(instrument[3], "drums");
        strcpy(instrument[4], "tambour");
    }
    void show()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << instrument[i];
            cout << " ";
        }
    }
};
class TypeIns : public Musicians
{
public:
    void get()
    {
        cout << "1. sting instruments" << endl;
        cout << "2. wind instruments" << endl;
        cout << "3.percussion instruments" << endl;
    }
    void show(int choice)
    {
        switch (choice)
        {
        case 1:
            string();
            Musicians::show();
            break;
        case 2:
            wind();
            Musicians::show();
            break;
        case 3:
            perc();
            Musicians::show();
            break;
        }
    }
};
int main()
{
    int x;
    TypeIns t;
    t.get();
    cout << "Enter choice";
    cin >> x;
    t.show(x);
    return 0;
}