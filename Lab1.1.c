#include<stdio.h>
#define PR() (printf("%c - %d\n",c,c))
int main()
{
	char c;
	for( c='A';c<='Z';c++) PR();
	for( c='a';c<='z';c++) PR();
	c=' ' ; PR();
	c='\n'; PR();
	return 0;
}

