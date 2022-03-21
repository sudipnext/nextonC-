#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    int nov=0, noc=0;
    ifstream reading("vowels.txt");
    if(reading.bad()){
        cout <<"Error while opening the file!";
    }
    while (reading.eof() == 0)
    {
        reading.get(ch);
        if(ch=='a' || ch == 'e' || ch == 'i' || ch =='o'||ch == 'u'){
            nov++;
        }
        else{
            noc++;
        }
    }
    cout << "The no. of vowels are:- "<<nov << " and the no of consonants are:- "<<noc<<endl;

    reading.get(ch);
}
