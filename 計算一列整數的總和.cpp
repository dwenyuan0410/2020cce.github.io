#include <stdio.h>
int a[100];
int main()
{
	int total=0;
	for(int i=0; a[i-1]!=999; i++){
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d", &a[i]);
		total+= a[i];
	}
	printf("The total is: %d", total-999);
}
