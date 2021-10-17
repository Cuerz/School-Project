#include<stdio.h>
int main()
{
	char s[1000];
	scanf("%[^\n]",&s);
	int count=0;
	for(int i=0;i<1000;i++)
	{
		if(s[i]>='a'&&s[i]<='z'&&s[i+1]==' ')
			count++;
		if(s[i]=='\0')
		{
			count++;
			break;
		}
	}
	printf("%d",count);
	return 0;
}
