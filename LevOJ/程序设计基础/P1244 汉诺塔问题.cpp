#include<stdio.h>
int main(){
	int n,str[100],l,i,j,m;
	while(scanf("%d",&n)!=EOF)
	{
		l=0;str[0]=1;
		for(i=0;i<n;i++)
		{
			m=0;
			for(j=0;j<=l;j++){
				m+=str[j]*2;
				str[j]=m%10;
				m/=10;
			}
			if(m!=0)
			{
				l++;
				str[l]=1;
			}
		}
		for(str[0]--;l+1;l--)
			printf("%d",str[l]);
		printf("\n");
	}
	return 0;
}
