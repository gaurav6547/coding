#include<iostream>
using namespace std;

int Countvowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e')  || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

    iRet = Countvowels(Arr);
    cout<<"Number of vowels  are : "<<iRet<<endl;

    return 0;
}
