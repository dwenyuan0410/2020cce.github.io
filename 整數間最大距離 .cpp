#include <stdio.h>
int main()
{
	int min, med, max;
	for(int i=1; i<4; i++){
		int a;
		scanf("%d", &a);
		if(a>max){
			min=med;
			med=max;
			max=a;
		}
		else if(a>med){
			min=med;
			med=a;
		}
		else min=a;
	}
	printf("%d\n", max-min);
}
}
