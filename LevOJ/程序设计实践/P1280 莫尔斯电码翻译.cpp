#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	while(~scanf("%s",a)){
		int b[100],i,j,k;
		int len=strlen(a);
		for(i=0;a[i]!='\0';i++){
			if(a[i]>='A'&&a[i]<='Z')
			b[i]=a[i]-'A'+1;
			if(a[i]>='0'&&a[i]<='9')
			b[i]=a[i]-'0'+27;
		}
		for(j=0;j<=len-1;j++){
			switch(b[j]){
				case 1:printf(".-");break;
				case 2:printf("-...");break;
				case 3:printf("-.-.");break;
				case 4:printf("-..");break;
				case 5:printf(".");break;
				case 6:printf("..-.");break;
				case 7:printf("--.");break;
				case 8:printf("....");break;
				case 9:printf("..");break;
				case 10:printf(".---");break;
				case 11:printf("-.-");break;
				case 12:printf(".-..");break;
				case 13:printf("--");break;
				case 14:printf("-.");break;
				case 15:printf("---");break;
				case 16:printf(".--.");break;
				case 17:printf("--.-");break;
				case 18:printf(".-.");break;
				case 19:printf("...");break;
				case 20:printf("-");break;
				case 21:printf("..-");break;
				case 22:printf("...-");break;
				case 23:printf(".--");break;
				case 24:printf("-..-");break;
				case 25:printf("-.--");break;
				case 26:printf("--..");break;
				case 27:printf(".----");break;
				case 28:printf("..---");break;
				case 29:printf("...--");break;
				case 30:printf("....-");break;
				case 31:printf(".....");break;
				case 32:printf("-....");break;
				case 33:printf("--...");break;
				case 34:printf("---..");break;
				case 35:printf("----.");break;
				case 36:printf("-----");break;			
			}	
			if(j!=len-1)printf("===");
			if(j==len-1)printf("\n");
		}
	}
	return 0;
}
