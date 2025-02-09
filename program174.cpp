#include<iostream>
using namespace std;

int CountL(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

   c = CountL(Arr);
    cout<<"String contains l : "<<iRet<<" times"<<endl;

    return 0;
}
//-----------------------------------------------------

#include<iostream>
using namspace std;

int CountL(char str[])
{
	int Cnt = 0;
	while(str[] != '\0')
	{
		if(*str == 'l' || *str == 'L')
		{
			Cnt++;
		}
		str++;
	}
	return Cnt;
}

int main()
{
	char Arr[20];
	
	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	ret = CountL(Arr);
	
	cout<<"String contain of L it length is"<<ret;
	return 0;
}
