#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void max(char s[])
{
    int a=0,b,i,length=0;
    int start=0,end=0;
    for(i=0;i<strlen(s)+1;i++)
    {
    	if(s[i]==' '||s[i]=='\0')
    	{
    		b=i-1;
    		if(b-a+1>length)
    		{
				length=b-a+1;			
    		    start=a;
    		    end=b;
			}
			a=i+1;
		}
	}
	for(i=start;i<=end;i++)
	{
	printf("%c",s[i]);
	}
		printf("\n");
}
void min(char s[])
{ int a=0,b,i,length=0;
    int start=0,end=0;
    for(i=0;i<strlen(s)+1;i++)
    {
    	if(s[i]==' '||s[i]=='\0')
    	{
    		b=i-1;
    		if(b-a+1<length)
    		{
				length=b-a+1;			
    		    start=a;
    		    end=b;
			}
			a=i+1;
		}
	}
	for(i=start;i<=end;i++)
	{
	printf("%c",s[i]);
	}
	printf("\n");
} 
int main()
{
	char s[500];
	gets(s);
	max(s);
	min(s);
    return 0;
}

