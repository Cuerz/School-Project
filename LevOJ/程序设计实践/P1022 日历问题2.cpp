#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int year=2007,month=10,day=10;
		int i,m;
		for(i=1;i<=n;i++)
		{
			switch(month)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					m=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					m=30;
					break;
				case 2:
					if((year%400==0)||(year%4==0&&year%100!=0))
						m=29;
					else m=28;
					break;
			}
			day+=1;
			if(day==m+1)
			{
				month+=1;
				day=1;
				if(month==13)
				{
					year+=1;
					month=1;
				}
			}
		}
		printf("%d-%02d-%02d\n",year,month,day);
	}
	return 0; 
 } 
