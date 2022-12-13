#include<stdio.h>

int main()
{

	int n;
	char a;

	for (n=0 ;n<=9; n++) {
		putchar(n + '0');
	}
	for (a='a'; a<='f'; a++) {
		putchar(a);
	}
	putchar('\n');

	return (0);
}
