#include<iostream>

using namespace std;

class Summation
{
	private:
		int x;
		int y;
		int z;
		
	public:
	
	void Add()
	{
		cout<<"Enter two number"<<endl;
		cin>>x>>y;
		z = x+y;
	   cout<<"Addition of two no is:"<<z<<endl;	
	}		
};

    int main()
    {
    	Summation sum;
    	sum.Add();
    	return 0;
	}
	
//////////////////////////////////////////////////////////////////////////////////////
	
	
