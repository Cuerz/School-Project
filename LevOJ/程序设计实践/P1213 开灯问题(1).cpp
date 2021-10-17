#include<stdio.h>
int main(){
	int n,k,count=0;
	while(~scanf("%d%d",&n,&k)){
			int l[n]={0};
		for(int a=2;a<=k;a++){
			for(int i=0;i<n;i++)
				if((i+1)%a==0){
					if(l[i]==1)
						l[i]=0;
					else if(l[i]==0)
						l[i]=1;
				}
	}
		for(int i=0;i<n;i++)
			if(l[i]==1)
				count++;
		for(int i=0,m=0;i<n;i++){
			if(l[i]==1&m<count-1){
				m++;
				printf("%d ",i+1);
			}
			else if(l[i]==1&m==count-1){
				printf("%d",i+1);
		 	}
		 }
		printf("\n");
	}
	return 0;
}
