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
int a[101][101],z,n,m,i,j,k,l,r,c=0,v=0,u=0,d[10001];
vector< vector< pair<int,int> > >q;
set< pair<int,int> >s;
main()
{

   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

  scanf ("%d%d%d",&n,&l,&r);

  q.resize(n+10);

  for (i=0;i<n;i++)
   {
       d[i]=INF;
     for (j=0;j<n;j++)
       {
       scanf ("%d",&a[i][j]);
      if (a[i][j]!=-1) q[i].push_back(make_pair(j,a[i][j]));
       }
   }

    d[l-1]=0;

   s.insert(make_pair(0,l-1));

     while (!s.empty())
      {
          int v = s.begin()->second;
           s.erase(s.begin());

            for (i=0;i<q[v].size();i++)
             {
                 int to = q[v][i].first;
                 int price = q[v][i].second;

                if (d[v]+price<d[to])
                 {
                     s.erase(make_pair(d[to],to));
                     d[to]=d[v]+price;
                     s.insert(make_pair(d[to],to));
                 }
             }
      }

  if (d[r-1]==INF)printf("-1\n");
  else printf ("%d\n",d[r-1]);

return 0;
}
