#include<stdio.h>
int main()
{
	long long int a;
	while(~scanf("%d",&a))
	{
		int n=0;
		do{
			a/=10;
			n++;
		}while(a!=0);
		if(n==5)
			printf("22113\n");
		else printf("wrong\n");
	}
	return 0;
}
