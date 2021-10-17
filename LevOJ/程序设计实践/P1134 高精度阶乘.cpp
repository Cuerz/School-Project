#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int count,t;
		int i,j,k;
		int a[3000];
		a[0]=1;
		count=1;
		for(i=1;i<=n;i++)
		{
			k=0;
			for(j=0;j<count;j++)
			{
				t=a[j]*i+k;
				a[j]=t%10;
				k=t/10;
			}
			while(k)
			{
				a[count++]=k%10;
				k/=10;
			}
		}
		for(i=count-1;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
} 
