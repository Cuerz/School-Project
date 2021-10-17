#include <stdio.h>
#include <string.h> 
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		char a[100]={0},b[100]={0};
			gets(a); 
			int l=strlen(a);
			int k=l-1,i;
			b[l]='\0';
			for(i=0;i<l;i++)
				b[k--]=a[i];
			if(strcmp(a,b))
				printf("NO\n");
			else
				printf("YES\n");
		
	}
	return 0;
}
