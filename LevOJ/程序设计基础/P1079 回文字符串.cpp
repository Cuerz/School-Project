#include <stdio.h>
#include <string.h> 
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		while(n--)
		{
			char a[100]={0},b[100]={0};
			gets(a);
			int l=strlen(a);
			int k=l-1,i;
			b[l]='\0';
			for(i=0;i<l;i++)
				b[k--]=a[i];
			if(strcmp(a,b))
				printf("No\n");
			else
				printf("Yes\n");
		}
	}
	return 0;
}
