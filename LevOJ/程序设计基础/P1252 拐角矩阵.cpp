#include<stdio.h>
int main()
{
	int n;
	int i,j;
	while(~scanf("%d",&n))
	{
		int str[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(i<=j)
				str[i][j]=n-j;
				else str[i][j]=n-i;
			}
		for(i=0;i<n;i++)
		{ 
			for(j=0;j<n;j++)
				printf("%d ",str[i][j]);
			printf("\n");
		} 
	 }
	return 0;
}
