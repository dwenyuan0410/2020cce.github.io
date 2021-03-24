#include <stdio.h>
int main()
{
	int n, a[5]={0};
	scanf("%d", &n);

	for(int i=0; i<5; i++){
		a[i]=n%10;
		n=n/10;
	}

	for(int i=4; i>0; i--){
		printf("%d   ", a[i]);
	}printf("%d", a[0]);

}
