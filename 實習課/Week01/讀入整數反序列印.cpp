#include <stdio.h>
int main()
{
	int space=1, a[10]={};
	for(int i=0; space>0; i++){
		scanf("%d", &space);
		if(space!=0) a[i]=space;
	}
	for(int i=9; i>=0; i--){
		if(a[i]!=0) printf("%d ", a[i]);
	}printf("\n");
}
