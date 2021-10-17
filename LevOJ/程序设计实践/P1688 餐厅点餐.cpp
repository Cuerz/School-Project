#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a,b,c,d,e,i,j,k,l,m,n,count=0;
		int min,max;
		int	A[10],B[10],C[10],D[10],E[10];
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		for(i=0;i<a;i++)scanf("%d",&A[i]);
		for(i=0;i<b;i++)scanf("%d",&B[i]);
		for(i=0;i<c;i++)scanf("%d",&C[i]);
		for(i=0;i<d;i++)scanf("%d",&D[i]);
		for(i=0;i<e;i++)scanf("%d",&E[i]);
		scanf("%d%d",&min,&max);
		D[d]=0;
		E[e]=0;
		for(i=0;i<d;i++)
			for(j=i+1;j<=d;j++)
				for(k=0;k<e;k++)
					for(l=k+1;l<=e;l++){
						int s=D[i]+D[j]+E[k]+E[l];
						for(m=0;m<a;m++)
							for(n=0;n<b;n++){
								s+=A[m]+B[n];
								if(s<=max&&s>=min)	
									count++;
								s-=A[m]+B[n];
							}
						for(m=0;m<c;m++){
							s+=C[m];
							if(s<=max&&s>=min)	
								count++;
							s-=C[m];
						}
					}
		printf("%d\n",count);
	}
	return 0;
}
