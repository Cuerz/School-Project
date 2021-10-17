#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char m[100];
	scanf("%d",&n);
	char a[n][100];
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(j=0;j<n;j++) 
		for(i=0;i<n-j-1;i++)
		  	if(strcmp(a[i],a[i+1])>0)
		  	{
			  	strcpy(m,a[i]);
			  	strcpy(a[i],a[i+1]);
			  	strcpy(a[i+1],m);
		  	} 
	for(i=0;i<n;i++)
	   	if(strcmp(a[i],"China"))
	   		printf("%s\n",a[i]);
	printf("%s\n","China");
	return 0;
}
