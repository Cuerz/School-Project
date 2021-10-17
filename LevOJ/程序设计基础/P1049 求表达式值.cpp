#include<stdio.h>
int main()
{
	int a;
	float x,y,m;
	while(scanf("%d %f %f",&a,&x,&y)!=EOF)
	{
	    m=x+a%3*(int)(x+y)%2/4;
	    printf("%f\n",m);
	 } 
	 return 0;
 } 
