#include <stdio.h>
#define N 10000
int main()
{
	int L,M,i;
    int m[N]={0};
	while(scanf("%d %d",&L,&M)!=EOF)
	{
	int c=0;
	while(M--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++)
		{
		m[i]=1;
		}
	
	} 
		for(i=0;i<=L;i++)
		{
			if(m[i]==0)
			c++;
		}	
		printf("%d\n",c);
	}
	return 0;
}
