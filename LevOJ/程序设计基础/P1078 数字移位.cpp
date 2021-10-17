#include<stdio.h>
int main() 
{
	int N,m;
	int s[500],p[500];
	while(scanf("%d%d",&N,&m)!=EOF)
	{
		int i=0,a,q;
		q=N;
		while(N--)
		{
			scanf("%d",&a);
			s[i]=a;
			p[i]=a;
			i++;	
		}
		for(i=m;i<q;i++)
		{
			s[i-m]=s[i];
		}
		for(i=0;i<m;i++)
		{
			s[i+q-m]=p[i];
		}
		for(i=0;i<q;i++)
		printf("%d ",s[i]);
		printf("\n");	
	}	
	return 0;
}

