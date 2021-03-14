#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(n;n>1;n--){
		ans+= (n-1)*n;
	}
	printf("%d\n", ans);
}
