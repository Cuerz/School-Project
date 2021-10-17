#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a=0,b=1,sum;
		for(int i=0;i<n;i++)
		{
			sum=a+b;
			a=b;
			b=sum;
		}
		printf("%d\n",sum);
	}
	return 0;
}
