#include <stdio.h>
int main()
{
	char a[100];
	while(scanf("%[^\n]",a)!=EOF) 
	{
		getchar();
		int i,n=0;
		char x;
		scanf("%c",&x);
		getchar();
		for(i=0;a[i]!='\0';i++)
		{
			if(x==a[i])
			n++;
		} 
		printf("%d\n",n);		
	}
	return 0;
}
