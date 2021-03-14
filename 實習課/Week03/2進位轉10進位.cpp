#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	ans+=n%10;
	n-=n%10;
	if(n%100==10) ans+=2;
	if(n/100==1) ans+=4;
	if(n/100==10) ans+=8;
	if(n/100==11) ans+=12;
	printf("%d\n", ans);
}
