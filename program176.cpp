#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);
    cout<<"Number of capital characters are : "<<iRet<<endl;

    return 0;
}

//------------------------------------------------

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
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
	int ret = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	ret = CountCapital(Arr);
	
	cout<<"No of capital no is : "<<ret<<endl;
	return 0;
}
