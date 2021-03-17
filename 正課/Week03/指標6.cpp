#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfALL()
{
	for(int i=0; i<5; i++){
		printf("%d", a[i]);
	}printf("\n");
}
int main()
{
	int  *p=&a[0]; /*«Å§i*/
	*p=222;
		printfALL();
	int *p2=p+2; /*«Å§i*/
	*p=666;
		printfALL();
	p--; /*¨Ï¥Î*/
	*p=555;
		printfALL();
}
