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
int a[1001][1001],z=-1,n,m,i,j,k,l,r,c=0,u=0,p[10001];
vector< vector<int> >g;
set< pair<int,int> >s;
int used[10001];
bool used2[10001];

bool dfs (int x) {

  int i;
    used[x]=1;
    used2[x]=true;
     for (i=0;i<g[x].size();i++)
      {
          int to=g[x][i];
           if (used[to]==0)
            {
              p[to]=x;
              if (dfs (to))return true;
            }
          else if (used[to]==1 && p[x]!=to)
           {
               return true;
           }

      }
      used[x]=2;
      return false;

}
main()
{

   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

  scanf ("%d%d",&n,&m);

  g.resize(n+10);

    for (i=1;i<=m;i++)
     {
         scanf ("%d%d",&l,&r);
         g[l].push_back(r);
         g[r].push_back(l);
     }

     for (i=1;i<=n;i++)
      {
         if (!used2[i])
          {
             if (dfs (i)){printf ("YES\n");return 0;}
          }
      }
  printf ("NO\n");


return 0;
}
