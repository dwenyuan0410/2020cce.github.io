#include <stdio.h>
int main()
{
	int m, price=100;
	scanf("%d", &m);
	if(m-1500>0){
		m-= 1500;
		price+= m/250*5;
		if(m%250>0)
			price+= 5;
	}
	printf("%d", price);
}
