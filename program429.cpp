// Example: define member function without argument within the class

#include<iostream>
using namespace std;

class Person
{
	int id;
	char name[100];
	
	public:
		void set_p()
		{
			cout<<"Enter Id"<<endl;
			cin>>id;
			fflush(stdin);
			
			
			cout<<"Enter Name"<<endl;
			cin.getline(name,100);			
		}
		
		void Display_p()
		{
			cout<<"ID:->"<<id<<endl;
			cout<<"Name:->"<<name<<<endl;
		}
};

class Student: private Person
{
	int course[50];
	int fee;
	
	public:
		void set_s()
		{
			set_p();
			cout<<"Enter Course Name"<<endl;
				fflush(stdin);
			cin.getline(course,50);
		
			cout<<"Enter Fee"<<endl;
			cin>>fee;			
		}
		
		void Display_s()
		{
			Display_p();
			cout<<"Course:->"<<course<<endl;
			cout<<"Fee:->"<<fee<<endl;
};

int main()
{
	Student s;
	s.set_s();
	s.Display_s();
	return 0;
}
