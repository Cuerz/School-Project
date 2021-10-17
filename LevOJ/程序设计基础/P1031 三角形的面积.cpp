# include <stdio.h>
# include <math.h> 
int main()
{
	double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
	    if (a+b>c&&a+c>b&&b+c>a)	
	    {
		double p,s;
		p=0.5*(a+b+c);
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2f\n",s);
		}	
	    else
	    printf("-1\n");
	}
	return 0;
 }
