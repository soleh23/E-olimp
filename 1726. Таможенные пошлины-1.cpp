#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
 const int INF=1000000000;
int x,y,z,n,m,i,j,k,l,c,v,r,a[1000001],b[1000001],d[1000001];
 vector< vector< pair<int,int> > >g;
 vector<int>f;
 queue<int>q;
 set< pair<int,int> >s;
 main()
 {

     freopen ("input.txt","r",stdin);
     freopen ("output.txt","w",stdout);

       scanf ("%d%d",&n,&m);

        g.resize(n+10);

        for (i=1;i<=m;i++)
         {
            scanf ("%d%d%d",&x,&y,&z);
              g[x].push_back(make_pair(y,z));
              g[y].push_back(make_pair(x,z));
         }

         scanf ("%d%d",&l,&r);

          s.insert(make_pair(0,l));

              for (i=1;i<=n;i++)
                d[i]=INF;

                 d[l]=0;

                  while (!s.empty())
                   {
                      v=s.begin()->second;

                        s.erase(s.begin());

                          for (i=0;i<g[v].size();i++)
                           {
                              int to=g[v][i].first;
                              int price=g[v][i].second;

                                if (max(d[v],price)<d[to])
                                 {
                                    s.erase(make_pair(d[to],to));
                                    d[to]=max(d[v],price);
                                    s.insert(make_pair(d[to],to));
                                 }

                           }
                   }

            printf ("%d\n",d[r]);

return 0;
 }
