#include<stdio.h>
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		int i=0;
		int c=0;
		int a[n]={0};
		if(m==1)
		{
			for(int q=1;q<=n;q++)
				printf("%d ",q);
		}
		else do
		{
			int p=0;
			for(int k=1;k<m;i++)
			{	
				if(a[i]==1&&i==n-1)
				{
					i=-1;
					continue;
				}
				if(i==n-1)
					i=-1;
				if(a[i]==1)
					continue;
				k++;
				if(p==1)
					break;
				if(k==m&&a[i+1]==1)
				{
					k=m-1;
					p++;
				}
			}
				a[i]=1;	
			 	printf("%d ",i+1);
				c++;
		}while(c!=n);
		printf("\n");
		
	}
	return 0;
 }
