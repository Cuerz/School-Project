#include<stdio.h>
#include <string.h> 
int main()
{
	char m[100000],n[100000];
	while(scanf("%s%s",m,n)!=EOF)
	{
		int count=0,c=0; 
		int l1=strlen(m),l2=strlen(n);
		for(int i=0;i<l1;i++)
		{
			for(int j=c;j<l2;j++)
			{
				if(m[i]==n[j])
				{
					count++;
					c=j+1;
					break;
				}
			}
		}
		if(count==l1)
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
 } 
