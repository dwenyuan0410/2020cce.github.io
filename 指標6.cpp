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
	int  *p=&a[0]; /*�ŧi*/
	*p=222;
		printfALL();
	int *p2=p+2; /*�ŧi*/
	*p=666;
		printfALL();
	p--; /*�ϥ�*/
	*p=555;
		printfALL();
}
