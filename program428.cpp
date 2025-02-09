#include<iostream>

using namespace std;

class Adder
{
	private:
		//Hidden data from outside world
		int Total;
	public:
		//constructor
		Adder(int i)
		{
			total = i;
		}
		
		//interface to outside world
		void AddSum(int number)
		{
			total = toatl + number;
		}
		
		//interface to outside world
		int getTotal()
		{
			return Total;
		}						
		
}

int main()
{
	Adder a;
	a.AddSum(10);
}
