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

## 進階題：讀入整數反序列印
```C
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


```

## 進階題：A的B次方函數 
```C
#include <stdio.h>
int MYPOWER(int a, int b)
{
	int ans=1;
	for(b;b!=0;b--){
		ans*=a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 進階題：漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(n; n>1; n--){
		int sam=(n-1)*n;
		ans += sam;
	}
	printf("%d\n", ans);
}
```

## 基礎題：找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=", n);
	printf("50*%d", n/50);
	printf("+5*%d+1*%d\n", n%50/5, n%50%5);
}
```

## 基礎題：因數個數 
```C
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		if(n%i==0) ans++;
	}
	printf("%d\n", ans);
}
```

## 基礎題：找倍數 
```C
#include <stdio.h>
int main()
{
	int a[10]={0}, ans=0;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i]%3==0) ans++;
	}
	printf("%d\n", ans);
}
```

## 基礎題：整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=90) printf("A\n");
	else if(n>=80) printf("B\n");
	else if(n>=60) printf("C\n");
	else printf("F\n");
}
```

## 指標1
*p=&n1 => 將p指標指向n1的位址
## 指標2
## 指標3
