#include <stdio.h>
#include <conio.h>
void printchars(char ch,int n)
{
	int i;
	printf("Enter number:");
	scanf("%d",&n);
	printf("\nEnter character:");
	scanf("%c",&ch);
	for(i=1; i<=n; i++)
		printf("%c\t",ch);
}
void main()
{
	int n,ch;
	clrscr();
	printchars(ch,n);
	getch();
}