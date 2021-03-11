#include <stdio.h>
int main()
{
	int n1=10, n2=20, n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

	int *p=&n1; /*p裡面放的是n1的位置&n1*/
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

	int *p2=&n3; /*p2裡面放的是n3的位置&n3*/
	*p2=300;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

	p2=p;/*現在p2裡面放的跟p一樣*/
	*p2=400;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
