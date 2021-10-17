# include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a=0,b=1,m;
		for(int i=0;i<n;i++)
		{
			m=a+b;
			a=b;
			b=m;
		}
		printf("%d\n",m);
	}
	return 0;
 } 
