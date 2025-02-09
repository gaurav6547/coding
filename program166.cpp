#include<iostream>
using namespace std;

int main()
{
    char Arr[] = "Hello";
    int i = 0;

    for(i = 0; Arr[i] != '\0'; i++)
    {
        cout<<Arr[i]<<endl;
    }

    return 0;
}
//-------------------------------
#include<iostream>
using namspace std;

int main()
{
	cha Arr[] = "Hello";
	int i = 0;
	
	for(i = 0; Arr[i] < '\0'; i++)
	{
		cout<<Arr[i]<<endl;
		i++;
	}
	return 0;
}

