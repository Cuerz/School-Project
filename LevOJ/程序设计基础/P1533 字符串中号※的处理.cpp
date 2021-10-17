#include <stdio.h>
#include<string.h> 
int main()
{
	char a[100];
	while(scanf("%s",a)+1)
	{ 
		int i=0;
		char *p=a;
		while(*p&&*p=='*')
		{
			a[i]=*p;
			i++;
			p++;
		}
		while(*p)
		{
			if(*p!='*')
			{
				a[i]=*p;
				i++;
			}
			p++;
		}
		a[i]='\0';
		puts(a);
	} 
	return 0;
}
