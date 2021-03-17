#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
	int *p=&a[0]; /*p指向a[0]*/
	*p=222;

	p=p+2; /*p指向a[2]*/
	*p=666;

	p--; /*p指向a[1]*/
	*p=555;
}
