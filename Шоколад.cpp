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
int n,m,i,j,k,l,c=0,v=0,r,a;
vector< vector<int> >g;
int qwe (int x)
 {
    if (x%2==1)return 0;
    else return 1;
 }
main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

   scanf ("%d%d",&n,&m);

    g.resize(n*4);

    for (i=2;i<n*2;i+=2)
     {
         for (j=1;j<m*2;j++)
          {
              g[i].push_back(-1);
          }
     }

     for (i=1;i<=n;i++)
      {
         for (j=1;j<=m;j++)
          {
             scanf ("%d",&a);
              g[i+qwe(i)].push_back(a);
              g[i+qwe(i)].push_back(-1);
          }
      }


    for (i=1;i<n*2;i++)
     {
         for (j=0;j<m*2;j++)
          printf ("%d ",g[i][j]);
          printf ("\n");
     }


      /* if ()printf ("Yes\n");
       else printf ("No\n");*/

return 0;
}
