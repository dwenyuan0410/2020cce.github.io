#include <stdio.h>
int main()
{
	int m, price=100;
	scanf("%d", &m);
	m-=2000 ;
	if(m>0){
		price+=m/500*5;
		if(m%500>0) price+=5;
	}
	printf("%d\n", price);
}
