#include<stdio.h>
#include<math.h>
int main()
{
	int str[505]={0};
	int n,l,i,j,m;
	while(scanf("%d",&n)!=EOF)
	{
		l=0;
		str[0]=1;
		for(i=0;i<n;i++)
		{
			m=0;
			for(j=0;j<=l;j++)
			{
				m+=str[j]*2;
				str[j]=m%10;
				m/=10;
			}
			if(m!=0&&l<=500)
			{
				l++;
				str[l]=1;
			}
		}
		str[0]--;
		for(i=499;i>=0;i--)
			printf("%d",str[i]);
		printf("\n");
	}
	return 0;
}
