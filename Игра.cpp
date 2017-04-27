#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#include<string.h>
#include<stack>
using namespace std;
const int INF=1000000000;
int d[1000001],n,m,i,j,k,l,c=0,v=0,r,a[1000001];
vector< vector<int> >g;
main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

    scanf ("%d",&n);

     for (i=1;i<=n;i++)
      scanf ("%d",&a[i]);

       d[0]=0;
       d[1]=0;
       d[2]=abs(a[2]-a[1]);


        for (i=3;i<=n;i++)
         {
           d[i]=min(d[i-1]+abs(a[i-1]-a[i]),d[i-2]+(3*abs(a[i-2]-a[i])));
         }
         printf ("%d\n",d[n]);


return 0;
}
