#include<stdio.h>
int main()
{
	int i;
	while(~scanf("%d",&i))
	{
		i%=7;
		switch(i)
		{
			case 0:
				printf("7\n");
				break;
			case 1:
				printf("1\n");
				break;
			case 2:
				printf("2\n");
				break;
			case 3:
				printf("3\n");
				break;
			case 4:
				printf("4\n");
				break;
			case 5:
				printf("5\n");
				break;
			case 6:
				printf("6\n");
				break;
		}
	}
	return 0;
 } 
