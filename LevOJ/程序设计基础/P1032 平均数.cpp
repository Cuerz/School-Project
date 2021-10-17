#include <stdio.h>
#define N 100
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a[N];
		int k,m,i,p;
		double b=0,c=0;
		scanf("%d%d",&k,&m);
		for(i=0;i<k;i++)
		{
			scanf("%d",&p);
			a[i]=p;
			if(a[i]>m)
			{
			    b+=a[i];
			    c++;
			}
		}	
		
		if(c==0)
		printf("-1\n");
		else printf("%.2f\n",b/c);
	}
	return 0;
}
