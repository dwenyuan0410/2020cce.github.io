#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
	int *p=&a[0]; /*p���Va[0]*/
	*p=222;

	p=p+2; /*p���Va[2]*/
	*p=666;

	p--; /*p���Va[1]*/
	*p=555;
}
