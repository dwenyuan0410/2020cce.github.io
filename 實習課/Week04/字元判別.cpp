#include <stdio.h>
int main()
{
	char n;
	scanf("%c", &n);

	if(n>47 && n<58)
		printf("D");

	else if(n>64 && n<91)
		printf("U");

	else if(n>96 && n<123)
		printf("L");

	else
		printf("O");
}
