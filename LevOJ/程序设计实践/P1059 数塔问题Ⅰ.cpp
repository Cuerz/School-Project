#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b));
int a[1000][1000],b[1000][1000];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int i=0,j=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++){
				scanf("%d",&a[i][j]);
				b[i][j]=a[i][j];
			}
		}
		for(i=n-2;i>=0;i--)
			for(j=0;j<=i;j++)
			{
				b[i][j]+=min(b[i+1][j],b[i+1][j+1]);
			}
		printf("%d\n",b[0][0]);
	}
	return 0;
}
