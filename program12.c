//// Program to display 5 times Hello on screen
//
//#include<stdio.h>
//
//// Demonstration of SEQUANCE
//
//void Display();                 // Declaration
//
//int main()
//{
//    Display();                  // Function call
//    
//    return 0;
//}
//
//void Display()              // Defination
//{
//    printf("Hello\n");
//    printf("Hello\n");
//    printf("Hello\n");
//    printf("Hello\n");
//    printf("Hello\n");
//}
//


#include<stdio.h>

int Multiplication(int i1, int j1)
{
	int ans = 0;
	ans = i1*j1;
	return ans;
}

int main()
{
	int i = 10;
	int j = 20;
	int iRet = 0;
	
	iRet = Multiplication(i,j);
	
	printf("Ans is %d",iRet);
	
	return 0;
}
