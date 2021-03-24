#include<iostream>
int max_digit(int n)
{
	int i, a=0;
	for(int k=1; n>0; k++){
		i=n%10;
		n=n/10;
		if(i>a)
			a=i;
	}
	return a;
}
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}

