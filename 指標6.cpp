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
	int  *p=&a[0]; /*宣告*/
	*p=222;
		printfALL();
	int *p2=p+2; /*宣告*/
	*p=666;
		printfALL();
	p--; /*使用*/
	*p=555;
		printfALL();
}
