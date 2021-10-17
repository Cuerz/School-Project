#include<stdio.h>
int main()
{
	int K;
	while(~scanf("%d",&K))
	{
		while(K--)
		{
			int N,M,a;
			scanf("%d %d",&N,&M);
			for(a=1;a<N;a++)
			{
				if(N%a==0&&N%(M-a)==0)
				break;
			}
			if(a<N)
			printf("%d\n",a);
			else printf("-1\n");
			
		 } 
	}
	return 0;
}
