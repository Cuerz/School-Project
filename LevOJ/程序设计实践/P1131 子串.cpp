#include<stdio.h>
#include<string.h>
char str[100][100];
int find(char a[],int la,char b[]){
	int lb=strlen(b),i;
	for(i=0;i+la<=lb;i++){
		int flag=1;
		for(int j=0;j<la;j++)
			if(a[j]!=b[i+j]){
				flag=0;
				break;
			}
		if(flag==0){
			flag=1;
			for(int j=0;j<la;j++)
				if(a[la-1-j]!=b[i+j]){
					flag=0;
					break;
				}
		}
		if(flag!=0)
			return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,lshortest=101;
		char shortest[100];
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",str[i]);
			int l=strlen(str[i]);
			if(l<lshortest){
				strcpy(shortest,str[i]);
				lshortest=l;
			}
		}
		for(i=lshortest;;i--){
			int j;
			for(j=0;j+i<=lshortest;j++){
				int k,fine=1;
				for(k=0;k<n;k++){
					if(find(&shortest[j],i,str[k])==0){
						fine=0;
						break;
					}
				}
				if(fine!=0) goto end;
			}
		}
		end:
		printf("%d\n",i);
	}
	return 0;
}
