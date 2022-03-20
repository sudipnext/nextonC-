#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int data;
    ifstream fin;
    fin.open("welcome.txt");
    fin >> data;
    while(fin){
        cout << data <<endl;
        fin >> data;
    }
    fin.close();
    return 0;
}