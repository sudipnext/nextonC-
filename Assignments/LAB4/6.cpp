// Create a class with a data member to hold a "serial number" for each object created from the class. 
// That is, the first object created will be numbered 1, the second 2, and so on by using the basic 
// concept of static data members. Use static member function if it is useful in the program. 
// Otherwise, make a separate program that demonstrates the use of static member function.
#include<iostream>
using namespace std;

class serial{
	static int count;
	int x;
	public:
	serial(){
		count++;
		x = count;
	}
	void display(){cout<<"\nI am object "<<x;}
	static int getCount(){return count;}
};
int serial::count = 0;
int main(){
	cout<<"Total Object = "<<serial::getCount();
	serial o1,o2,o3;
	o1.display();
	o2.display();
	o3.display();
	cout<<"\nTotal Object = "<<serial::getCount();
	return 0;
}