#include<stdio.h>
int main() 
{
	int N,i=0;
	int a,q;
	int s[500]={0};
	scanf("%d",&N);
	q=N;
	while(N--)
	{
		scanf("%d",&a);
		s[i]=a;
		i++;	
	}
	int m,c=0;
	for(i=0;i<q-1;i++)
	{
		for(m=i+1;m<q;m++)
		{
			if(s[i]+s[m]==0)
			c++;
		}
	}
	printf("%d\n",c);
	return 0;
}

