// // Write a program that displays the current monthly salary of chief executive officer,
// information officer, and system analyst, programmer that has been increased by 9, 10, 12,
// and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
#include <iostream>
using namespace std;
float salarydisplayer(float, float);
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "For CEO "<<salarydisplayer(a, b)<<endl;
    cin >> a >> b;
    cout <<"For IO "<< salarydisplayer(a, b)<<endl;
    cin >> a >> b;
    cout <<"For ANALYIST "<< salarydisplayer(a, b)<<endl;
    
}   
float salarydisplayer(float x, float y)
{
    return x * (y+100) / 100;

}