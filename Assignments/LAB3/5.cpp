// Assume that an object represents an employee report that contains information 
// like employee id, total bonus, total overtime in a particular year. Use an array 
// of objects to represent n employees' reports. Write a program that displays the report. 
// Use setpara() member function to set report attributes by passing the arguments and member
//  function displayreport() to show the report according to the parameter passed. Display
//   the report in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// // had worked ... ... ... hours as overtime in the year ... ... ...

#include <iostream>

using namespace std;
class employee{
    private:
    int id,year=2021;
    float totalbonus, totalovertime;
    public:
    int setpara(int x, float y, float z){
        id = x;
        totalbonus = y;
        totalovertime =z;
    }
    int displayreport(){
        cout << "An employee with "<< id << " has received Rs "<< totalbonus << " as a bonus."<<endl;
        cout << "and had worked"<< totalovertime << "hours overtime in the year "<< year<<endl;
    }

};

int main(){
    int i,n,a;
    float b, c;
    cout << "Enter the no.of employee you want to enter"<<endl;
    cin >> n;
    employee t[n];
    for(i=0; i<n; i++){
    cout << "Enter the employee id totalbonus and total overtime simultaneously"<<endl;
    cin >> a >> b >>c;
    t[i].setpara(a, b, c);
    t[i].displayreport();
    }
}