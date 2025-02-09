//How to check a given string contains only number or not in C

#include<stdio.h>

void main()
{
    char str[50];
    int i,len = 0,count = 0;
    clrscr();
    printf("enter any string:: ");
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
            if(str[i] >= 48 && str[i] <= 57)    
            {
                  count++;
            }
    }
    printf("%d outoff %d numbers in a string",count,len);
    getc();
}
