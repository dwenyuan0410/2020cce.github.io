#include <stdio.h>
int main()
{
	int a[10]={}, b;
	for(int i=0;; i++){
		scanf("%d", &b);
		if(b>0)
			a[i]=b;
		else
			break;
	}

	int n, ans=0;
	scanf("%d", &n);

	for(int i=0; i<10; i++){
		if(a[i]==n)
			ans++;
	}
	printf("%d\n", ans);
}

