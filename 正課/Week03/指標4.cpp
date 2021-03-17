#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
	int *p=&a[0];
	*p=222;

	p=p+2; /*²{¦bp¸Ì­±©ñªº¬Oa[2]ªº¦ì§}*/
	*p=666;
}
