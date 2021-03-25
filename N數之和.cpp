#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans=0, a;
	for(int i=1; i<=n; i++){
		scanf("%d", &a);
		ans += a;
	}
	printf("%d\n", ans);
}
