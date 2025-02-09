//How do you check if a given string is a palindrome?
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = { "abbba" };
 
    // Start from leftmost and
    // rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters
    // while they are same
    while (h < l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a palindrome\n", str);
            return 0;
            // will return from here
        }
    }
 
    printf("%s is a palindrome\n", str);
 
    return 0;
}
#include<stdio.h>
#include<string.h>
*/

#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[] = { "GAAG" };
	
	int l = 0;
	int  h = (strlen(str) - 1);
	
	while(l < h)
	{
		if(str[l++] != str[h--])
		{
			printf("String is not pallindrome");
		}
	
	}
	
	printf(" %s is Pallindrome",str);
	
	
	return 0;
}




























