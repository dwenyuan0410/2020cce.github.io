#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=", n);
	printf("50*%d", n/50);
	printf("+5*%d+1*%d\n", n%50/5, n%50%5);
}
