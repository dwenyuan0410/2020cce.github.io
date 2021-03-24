#include <stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);

	for(int k=1; n>0; k++){
		i= n%10;
		n= n/10;
	}
	printf("%d", i);
}
