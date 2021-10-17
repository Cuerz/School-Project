#include<stdio.h>
int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		int a[n];
		int b[1000]={0};
		b[0]=1;
		int i,j,c=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			for(j=c;j+1!=0;j--)
				if(b[j]!=0){
					b[j+a[i]]=1;
					if(j+a[i]>c)
						c=j+a[i];
				}
		}
		if(b[m]!=0)	
			printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
