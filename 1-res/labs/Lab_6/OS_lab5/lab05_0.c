#include <stdio.h>
//#include <conio.h>

int main()
{
  	char ch;
	while((scanf("%c",&ch))!=EOF)
	{
		printf("%c",toupper(ch));
	}	
	exit(0);
}
