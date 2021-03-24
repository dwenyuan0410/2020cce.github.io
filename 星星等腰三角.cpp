#include <stdio.h>
int main()
{
	int n, star=0;
	scanf("%d",&n);
	/*star=2*i-1*/
	/*space=n-star*/

	for(int i=1; n>0; i++){
		star=2*i-1;
		for(int i=1; i<n; i++)
			printf(" ");
		n--;
		for(int i=1; i<=star; i++)
			printf("*");

		printf("\n");
	}
}
