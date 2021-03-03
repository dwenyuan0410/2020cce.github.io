#include <stdio.h>
int MYPOWER(int a, int b)
{
	int ans=1;
	for(b;b!=0;b--){
		ans*=a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
