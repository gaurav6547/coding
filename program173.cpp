#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
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

    iRet = strlenX(Arr);
    cout<<"String length is : "<<iRet<<endl;

    return 0;
}
//------------------------------------------------------
#include<iostream>
using namespace std;

int StrlenX(char str[])
{
	int iCnt = 0;
	while(str[] != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int  ret = 0;
	
	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	ret = StrlenX(Arr);
	
	cout<<"Length os string is="<<ret;
	return 0;
}
