#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	char a[n][100];
	char b[100];
	for(i=0;i<n;i++)
		scanf("%*c%[^\n]",&a[i]);
	
	for(j=0;j<n;j++)
		for(i=0;i<n-j-1;i++)
		if(strcmp(a[i],a[i+1])>0)
		{
			strcpy(b,a[i]);
			strcpy(a[i],a[i+1]);
			strcpy(a[i+1],b);
		}
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);
	return 0;	
}
