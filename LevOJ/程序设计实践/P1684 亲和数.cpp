#include<stdio.h>
int fun(int x)
{
	int sum=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		sum+=i;
	}
	return sum;
}
int main()
{
	int M;
	scanf("%d",&M);
	while(M--)
	{
		int A,B;
		scanf("%d%d",&A,&B);
		if(fun(A)==B&&fun(B)==A)
			printf("Yes\n");
		else printf("No\n");
		
	}
	return 0;
}
