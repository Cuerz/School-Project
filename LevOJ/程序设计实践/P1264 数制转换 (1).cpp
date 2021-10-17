#include<stdio.h>
#include<string.h>
int main(){
	int p,r;
	char str[40];
	while(scanf("%d%d%s",&p,&r,str)!=EOF&&p!=0)
	{
		int temp=0;
		int lenth=strlen(str);
		int c=1;
		for(int i=lenth-1;i>=0;i--){
			int x;
			if (str[i]>='0'&&str[i]<='9')
				x =str[i]-'0';
			else if (str[i] >= 'A'&&str[i] <= 'Z')
				x = str[i] - 'A' + 10;
			temp+=x*c;
			c*=p;
		}
		char ans[40];
		int size=0;
		do{
			int x=temp%r;
			ans[size++]=(x<10)?x+'0':x-10+'A';
			temp/=r;
		}while(temp);
		for(int i=size-1;i>=0;i--){
			printf("%c",ans[i]);
		}
		printf("\n");	
	}
	return 0;
}
