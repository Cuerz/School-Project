#include <stdio.h>
int main()
{
    int n,m,c;
    while(~scanf("%d/%d%d",&n,&m,&c))
    {
        int i,a,b=1;
        a=n/m; 
        printf("%d.",a);
        b*=0.1;
        for(i=1;i<=c;i++,b*=0.1)
        {
           n=n%m*10;
           if(n==0)
           break;
           a=n/m;
           printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}

