#include <stdio.h>
int main()
{
	int min=0, mid=0, max=0;
	for(int i=1; i<4; i++){
		int a;
		scanf("%d", &a);
		if(a>max){
			min=mid;
			mid=max;
			max=a;
		}
		else if(a>mid){
			min=mid;
			mid=a;
		}
		else{
			min=a;
		}
	}
	printf("%d\n", max);
}
