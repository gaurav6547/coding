#include<stdio.h>

int Power(char *A)
{
	int res = 0;
	int i = 0;
	
	for(i = 0; A[i]; i++)
	{
		res = res * 10 + A[i] - '0';
	}
	
	if(res == 1)
	{
		return 0;
		return !(res &(res - 1));
	}
}

int main()
{
	int  
	return 0;
}
