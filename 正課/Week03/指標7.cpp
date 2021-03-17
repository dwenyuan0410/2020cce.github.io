#include <stdio.h>
#include <stdlib.h>
int a[5]={0,1,2,3,4}; /*in Global variables*/
int main()
{
	int a[5]={0,10,20,30,40}; /*in main*/
	int*p=(int*)malloc(sizeof(int)*10); /*¦b¥~³¡ªº°}¦C*/
	return 0;
}
