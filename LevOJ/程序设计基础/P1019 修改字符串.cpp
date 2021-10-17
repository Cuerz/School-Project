#include<stdio.h>    
#define N 100  
int main()  
{  
    char a[N];  
    int i;  
    scanf("%s", a);  
    for (i = 0; a[i] != '\0'; i++)  
    {  
        if ('A' <= a[i] &&a[i]<= 'Z')  
            printf("%c", a[i]+32);  

        else  
        printf("%c", a[i]);  
    }  
    return 0;  
}  
