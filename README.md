# 大一下-程設-week01-作業

## 進階題：分式化簡
```C
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	int a1=a, b1=b;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	do{
		c=a%b;
		a=b;
		b=c;
		c=a%b;
	}while(c!=0);
	printf("%d %d\n", a1/b, b1/b);
	
}

```
