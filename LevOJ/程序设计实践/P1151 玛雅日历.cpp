#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int day,year;
		char month[10];
		scanf("%d%s%d",&day,month,&year);
		if(strcmp(month,"pop")==0) day+=20*0;
		if(strcmp(month,"no")==0) day+=20*1;
		if(strcmp(month,"zip")==0) day+=20*2;
		if(strcmp(month,"zotz")==0) day+=20*3;
		if(strcmp(month,"tzec")==0) day+=20*4;
		if(strcmp(month,"xul")==0) day+=20*5;
		if(strcmp(month,"yoxkin")==0) day+=20*6;
		if(strcmp(month,"mol")==0) day+=20*7;
		if(strcmp(month,"chen")==0) day+=20*8;
		if(strcmp(month,"yax")==0) day+=20*9;
		if(strcmp(month,"zac")==0) day+=20*10;
		if(strcmp(month,"ceh")==0) day+=20*11;
		if(strcmp(month,"mac")==0) day+=20*12;
		if(strcmp(month,"kankin")==0) day+=20*13;
		if(strcmp(month,"muan")==0) day+=20*14;
		if(strcmp(month,"pax")==0) day+=20*15;
		if(strcmp(month,"koyaab")==0) day+=20*16;
		if(strcmp(month,"cumhu")==0) day+=20*17;
		if(strcmp(month,"uayet")==0) day+=20*18;
		day+=year*365;
		int a=day%13+1;
		printf("%d ",a);
		int t=day%20;
		switch(t){
		case 0:		printf("imix");break;
		case 1:		printf("ik");break;
		case 2:		printf("akbal");break;
		case 3:		printf("kan");break;
		case 4:		printf("chicchan");break;
		case 5:		printf("cimi");break;
		case 6:		printf("manik");break;
		case 7:		printf("lamat");break;
		case 8:		printf("muluk");break;
		case 9:		printf("ok");break;
		case 10:	printf("chuen");break;
		case 11:	printf("eb");break;
		case 12:	printf("ben");break;
		case 13:	printf("ix");break;
		case 14:	printf("mem");break;
		case 15:	printf("cib");break;
		case 16:	printf("caban");break;
		case 17:	printf("eznab");break;
		case 18:	printf("canac");break;
		case 19:	printf("ahau");break;
		}
		printf(" %d\n",day/260);
	} 
	return 0;
 } 
