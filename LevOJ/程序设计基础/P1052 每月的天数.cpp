#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if((a%400==0)||(a%4==0&&a%100!=0))
	    switch(b)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30\n");
				break;
			case 2:
				printf("29\n");
				break;
		}  
		 
		else
		switch(b)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30\n");
				break;
			case 2:
				printf("28\n");
				break;
		 }  
	}
	return 0;
}
