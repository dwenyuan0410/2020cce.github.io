#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
	int *p=&a[0]; /*p«ü¦Va[0]*/
	*p=222;

	p=p+2; /*p«ü¦Va[2]*/
	*p=666;

	p--; /*p«ü¦Va[1]*/
	*p=555;
}
