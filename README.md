# 大一下-程設-week01-作業

## Week01-實習課
### 進階題：分式化簡
輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。 
數字範圍：整數1 – 10000 

my ans:
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

### 進階題：讀入整數反序列印
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。 
數字範圍：整數 1 – 1000 

my ans:
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

### 進階題：A的B次方函數 
題目名稱：A的B次方函數
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
程式限制：不得使用power()函數。不得變更已給定的主程式。
主程式：
```C
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
my ans:
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

### 進階題：漸增數列相加
輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
數字範圍：整數1 – 1000 

my ans:
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

### 基礎題：找零錢
假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
數字範圍：整數1 – 1000

my ans:
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

### 基礎題：因數個數 
輸入一個正整數，顯示所有該正整數因數的個數。 
數字範圍：整數1 – 10000。

my ans:
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

### 基礎題：找倍數
連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 
整數範圍：1 – 1000 

my ans:
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

### 基礎題：整數轉換為等級
輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；
如果輸入的整數小於90但大於或等於80則輸出B，
如果小於80但大於或等於60，則輸出C；
如為其他整數，則輸出F。

my ans:
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
## Week02-正課
### 指標1
```C
#include <stdio.h>
int main()
{
	int n1=10, n2=20, n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	int *p=&n1; /*將p指標指向n1的位址*/
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
```
## 指標2
```C
#include <stdio.h>
int main()
{
	int n1=10, n2=20, n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	int *p=&n1; /*將p指標指向n1的位址*/
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	int *p2=&n3; /*將p2指標指向n3的位址*/
	*p2=300;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
```
## 指標3
```C
#include <stdio.h>
int main()
{
	int n1=10, n2=20, n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	int *p=&n1; /*p裡面放的是n1的位置&n1*/
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	int *p2=&n3; /*p2裡面放的是n3的位置&n3*/
	*p2=300;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	p2=p;/*現在p2裡面放的跟p一樣*/
	*p2=400;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
```

## Week03-實習課
### 進階題：大小寫轉換
讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換(大寫轉為小寫，小寫轉為大寫)後輸出。

my ans:
```C
#include <stdio.h>


int main()
{
	char s[100];

	scanf("%s",&s);
	for(int i=0;s[i]!=0; i++)
	{
	
		if(s[i]>64&&s[i]<91) 
			
			printf("%c", s[i]+32);
			
		else if(s[i]>96&&s[i]<123)
			
			 printf("%c",s[i]-32);
		else 
			printf("%c", s[i]);
	 }
	 
	 
	printf("\n");
}

```
### 進階題：漸增數列相加
輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
數字範圍：整數1 – 1000 

my ans:
```C
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(n;n>1;n--){
		ans+= (n-1)*n;
	}
	printf("%d\n", ans);
}
```
### 進階題：計算陣列的平方值
輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，再列出此算出平方值後的陣列。 
數字範圍：整數N範圍 1 – 10；其他整數1 – 100 

my ans:
```C
#include <stdio.h>
int a[10];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		printf("%d,", a[i]*a[i]);
	}
	printf("\n");
}
```
### 進階題：2進位轉10進位
讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。 
數字範圍：0000 – 1111

my ans:
```C
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	ans+=n%10;
	n-=n%10;
	if(n%100==10) ans+=2;
	if(n/100==1) ans+=4;
	if(n/100==10) ans+=8;
	if(n/100==11) ans+=12;
	printf("%d\n", ans);
}
```
### 基礎題：計算幾週與幾天
一週有7 天，讀入天數，計算該天數是幾週又幾天。 
數字範圍：整數1 – 365 

my ans:
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d %d\n", n/7, n%7);
}
```
### 基礎題：計程車資計算
輸入里程公尺數，輸出應付的車資。
計程車資計算方式為：起跳100 元(2000公尺)，續跳5元(每500公尺)。 
數字範圍：整數1 – 100000。

my ans:
```C
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
```
### 基礎題：兩數間可被5整除的整數
輸入兩個整數，找出兩數之間所有可以被5整除的整數。 
數字範圍：2個整數1 – 10000 

my ans:
```C
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	for(a;a<=b;a++){
		if(a%5==0) printf("%d\n", a);
	}
}
```
### 基礎題：整數間最大距離 
輸入3個相異整數，找出整數間最大的距離。 
數字範圍：整數1 – 10000 

my ans:
```C
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
```
