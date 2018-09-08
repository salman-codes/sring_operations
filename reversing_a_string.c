#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
int reverse(char line[MAX],int len)
{
	int i,text;
	for(i=0; i<len/2; i++)
	{
		text=line[i];
		line[i]=line[len-1-i];
		line[len-1-i]=text;
	}
	printf("\n\nReverse line is: %s",line);
return 0;
}
void main()
{
	char line[MAX],text;
	int len;
	clrscr();
	printf("Enter a line:");
	gets(line);
	len=strlen(line);
	printf("\nOriginal string: %s",line);
	reverse(line,len);
	getch();
}