#include<stdio.h>
#include<string.h>
int main()
{
	char m[1000],n[1000];
	while(scanf("%s%s",m,n)!=EOF)
	{
		int a[201]={0},b[201]={0};
		int i=0,lenm=0,lenn=0;
		lenm=a[0]=strlen(m);lenn=b[0]=strlen(n);
		for(i=1;i<=lenm;i++)
			a[i]=m[lenm-i]-'0';
		for(i=1;i<=lenn;i++)
			b[i]=n[lenn-i]-'0';
		if(a[0]<b[0])
			a[0]=b[0];
		for(i=1;i<=a[0];i++)
		{
			a[i]+=b[i];
			a[i+1]+=a[i]/10;
			a[i]%=10;
		 } 
		if(a[a[0]+1]>0)
		 	a[0]++;
		if(a[0]==0)
		printf("0\n");
		else for(i=a[0];i>0;i--)
		{
		 	printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
