#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
	{
	    if(a+b>c&&a+c>b&&b+c>a)
		{
	        double p,S;
		    p=(a+b+c)/2;
		    S=sqrt(p*(p-a)*(p-b)*(p-c));
		    printf("%.4f\n",S);
		}
		else printf("0\n");
    }
	return 0;
 } 
