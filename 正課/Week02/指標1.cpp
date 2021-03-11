#include <stdio.h>
int main()
{
	int n1=10, n2=20, n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

	int *p=&n1; /*±Np«ü¼Ð«ü¦Vn1ªº¦ì§}*/
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
