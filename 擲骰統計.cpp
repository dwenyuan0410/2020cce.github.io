#include <stdio.h>
char s[100];
int a, b, c, d, e, f;
int main()
{
	scanf("%s", &s);

	for(int i=0; s[i]!=0; i++){
		if(s[i]=='1') a++;
		else if(s[i]=='2') b++;
		else if(s[i]=='3') c++;
		else if(s[i]=='4') d++;
		else if(s[i]=='5') e++;
		else if(s[i]=='6') f++;
	}

	printf("1:%d\n", a);
	printf("2:%d\n", b);
	printf("3:%d\n", c);
	printf("4:%d\n", d);
	printf("5:%d\n", e);
	printf("6:%d\n", f);
}
