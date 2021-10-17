#include<stdio.h>
#include<string.h>
int main(){
	struct nation{
		int num,pep;
		char name[50],con[30];
	} country[10],m;
	int n,i,j,k;
	while(~scanf("%d",&n)){
		for(i=0;i<n;i++)
			scanf("%d %s %d %s",&country[i].num,country[i].name,&country[i].pep,country[i].con);
		for(j=0;j<n;j++)
			for(i=0;i<n-j-1;i++)
				if(strcmp(country[i].name,country[i+1].name)>0){
					m=country[i];
					country[i]=country[i+1];
					country[i+1]=m;
				}
		for(i=0;i<n;i++)
			if(strcmp(country[i].name,"China"))
				printf("%d %s %d %s\n",country[i].num,country[i].name,country[i].pep,country[i].con);
			else m=country[i];
		printf("%d %s %d %s\n",m.num,m.name,m.pep,m.con);
	}
	return 0;
}
