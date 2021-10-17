#include<stdio.h>
#include<string.h>
int main()
{
	char m[1000],n[1000];
	while(scanf("%s%s",m,n)!=EOF)
	{
		int a[201]={0},b[201]={0};
		int i,lenm=0,lenn=0;
		lenm=a[0]=strlen(m);
		lenn=b[0]=strlen(n);
		for(i=1;i<=a[0];i++)
			a[i]=m[lenm-i]-'0';
		for(i=1;i<=b[0];i++)
			b[i]=n[lenn-i]-'0';
		for(i=1;i<=a[0];i++)
		{
			if(a[i]<b[i])
		   	{
		   		a[i]+=10;
		   		a[i+1]-=1;
			}
		   	a[i]-=b[i]; 	
		}
		for(i=a[0];i>0;i--)
		{
			if(a[i]!=0)
			break;
		}
		for(i;i>0;i--)
		 	printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
