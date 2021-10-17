#include<stdio.h>
int main()
{
	int a[1000]={0};
	int i=0,m;
	do
	{
		scanf("%d",&a[i]);
		i++;
	}
	while(a[i-1]!=-1);
	for(m=1;m<1000;m++)
	{
		int c=0;
		for(i=0;i<1000;i++)
		{
			if(a[i]==m)
			c++;
		} 
		if(c!=0)
		printf("%d %d\n",m,c);		
	}
	return 0;
}
