#include <stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(a+b<=c||a+c<=b||b+c<=a)
		printf("not a triangle\n");
		
		else if(a==b&&b==c)
		printf("regular triangle\n");
		
		else if(a==b||b==c||c==a)
		printf("isosceles triangle\n");
		
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		printf("right triangle\n");
		
		else printf("triangle\n");
		
	}	
	
	return 0;
}
