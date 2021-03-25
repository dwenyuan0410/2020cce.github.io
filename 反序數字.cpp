#include <stdio.h>
int main()
{
	int a, n, ans=0;
	scanf("%d", &a);
	n=a;

	for(int i=1; n>0; i++){
		ans=n%10+ans*10;
		n=n/10;
	}
	printf("%d+%d=%d\n", a, ans, a+ans);
}
