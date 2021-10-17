#include <bits/stdc++.h>
using namespace std;
#define Max 10010
int x[Max],y[Max],z[Max];
int main()
{
    int n;
    while(cin >> n)
    {
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        memset(z,0,sizeof(z));
        for(int i=0;i<n;i++)
            cin >> x[i] >> y[i];
        sort(x,x+n);
        sort(y,y+n);
        for(int i=0;i<n;i++)
            z[i]=x[i]-i;
        sort(z,z+n);
        int ans_x=z[n/2],ans_y=y[n/2],res=0;
        for(int i=0;i<n;i++)
        {
            res+=abs(z[i]-ans_x);
            res+=abs(y[i]-ans_y);
        }
        cout << res << endl;
    }
    return 0;
}

