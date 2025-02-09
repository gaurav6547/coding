#include<iostream>

using namespace std;

class implementation
{
	private:
		int a;
		int b;
		
	public:
	//methods to set the values
	// private members
	
	void set(int x, int y)//paratemerized constructor
	{
	    a = x;
		b = y;	
	}	
	
	void Display()
	{
		cout<<"a ="<<a<<endl;
		cout<<"b ="<<b<<endl;
	}
};

int main()
{
	implementation obj;
	obj.set(20,30);
	obj.Display();
	return 0;
}

//Data abstraction is one of the most essential and important feature of object oriented programming in C++.
//Abstraction means displaying only essential information and hiding the details.
/*Data abstraction refers to providing only essential information about the data to the outside world,
/,hiding the background details or implementation.
*/


/*
Abstraction using Classes: We can implement Abstraction in C++ using classes. Class helps us to 
group data members and member functions using available access specifiers. A Class can decide 
which data member will be visible to outside world and which is not.
*/

/*
Advantages of Data Abstraction:

Helps the user to avoid writing the low level code
Avoids code duplication and increases reusability.
Can change internal implementation of class independently without affecting the user.
Helps to increase security of an application or program as only important details are provided to the user.
*/


/////////////////////////////////////////////////////////////////////////////


