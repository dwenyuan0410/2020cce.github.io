#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=50*%d", n, n/50);
	n=n%50;
	printf("+10*%d", n/10);
	n=n%10;
	printf("+5*%d+1*%d", n/5, n%5);
}
