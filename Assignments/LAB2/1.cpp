Write a program to set a structure to hold a date (mm,dd and yy),
assign values to the members of the structure and print out the values 
in the format 11/28/2004 by function. Pass the structure to the function
#include <iostream>

using namespace std;
struct date
{
    int m, d, y;
}x;
void display(struct date);

int main(){
   cout << "Enter the date in the format mm dd yy";
   cin >> x.m >> x.d >> x.y;
   display(x);

}
void display(date x){
    cout << x.m <<"/"<< x.d <<"/"<< x.y;
}