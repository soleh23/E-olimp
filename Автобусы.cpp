#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int INF=1000000000;
int a[1001],z,n,m,i,j,k,l,r,c=0,u=0;
pair<int,int>p[1001][1001];
bool used[10001];

main()
{

   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

  scanf ("%d%d%d%d",&n,&l,&r,&k);

   int a1,a2,a3,a4;
   for (i=1;i<=k;i++)
    {
        scanf ("%d%d%d%d",&a1,&a2,&a3,&a4);

        p[a1][a3]=(make_pair(a2,a4));
    }




return 0;
}
