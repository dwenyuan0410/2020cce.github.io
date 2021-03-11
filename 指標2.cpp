#include <stdio.h>
int main()
{
	int n1=10, n2=20, n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

	int *p=&n1; /*將p指標指向n1的位址*/
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

	int *p2=&n3; /*將p2指標指向n3的位址*/
	*p2=300;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
