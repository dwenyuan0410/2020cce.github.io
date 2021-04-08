#include <stdio.h>
int f(int n)
{
	int ans=0;
	for(int i=1; n>0; i++){
		ans= ans*10+n%10;
		n= n/10;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}
