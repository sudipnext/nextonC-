// Write a program that illustrates the following relationship and comment on them.

// i) const_object.non_const_mem_function

// ii) const_object.const_mem_function

// iii) non_const_object.non_const_mem_function

// iv) non_const_object.const_mem_function
#include<iostream>
using namespace std;

class constant{
	int i;
	public:
	constant(int x=0){
		i = x;
	}
	int display(){
		return i;
	}
	int getVal()const{
		return i;
	}
};
int main(){
	constant c(8);
	const constant c1(18);
	//cout<<"\nCalling non-constant member function from constant object. Val = "<<c1.display();  // Error occured if uncomment because constant object can only call constant member function
	cout<<"\nCalling constant member function from constant object. Val = "<<c1.getVal(); //Constant object can call constant member function
	cout<<"\nCalling non-cconstant member function from non-constant object. Val = "<<c.display(); //non-constant object can call non-constant member function as well as constant member function
	cout<<"\nCalling constant member function from non-constant object. Val = "<<c.getVal(); //non-constant object can call non-constant member function as well as constant member function
	return 0;
}