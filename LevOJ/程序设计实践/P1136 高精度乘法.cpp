#include<stdio.h>
#include<string.h>
int main()
{
	char m[100],n[100];
	while(scanf("%s%s",m,n)!=EOF)
	{
		int a[100],b[100],c[1000]={0};
		int i=0,j=0,l1=0,l2=0;
		int temp,k;
		l1=strlen(m);l2=strlen(n);
		for(i=0;i<l1;i++)
			a[i]=m[l1-i-1]-'0';
		for(i=0;i<l2;i++)
			b[i]=n[l2-i-1]-'0';
		for(j=0;j<l2;j++)
		{
			k=0;
			for(i=0;i<l1;i++)
			{
				int p=0;
				temp=a[i]*b[j]+k;
				c[i+j]+=temp%10;
				if(c[i+j]>=10)
				{
					p=c[i+j]/10;
					c[i+j]%=10;
				}
				k=temp/10+p;
				if(i==l1-1&&k>0)
					c[l1+j]=k;
			}
		}
		for(i=l1+l2-1;i>=0;i--)
			if(c[i]!=0)
				break;
		for(;i>=0;i--)
			printf("%d",c[i]);	
		printf("\n");
	}
	return 0;
 } 
