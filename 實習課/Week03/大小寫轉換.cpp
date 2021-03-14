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

