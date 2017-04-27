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
int d[301][301],n,m,i,j,k,l,c=0,v=0,r;
char s[301][301],path[301][301];
vector< vector<int> >g;
pair<int,int>p[301][301];
main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

    scanf ("%d",&n);

   for (i=0;i<n;i++)
    scanf ("%s",&s[i]);

   d[0][0]=s[0][0]-48;
   p[0][0]=make_pair(-1,-1);
   path[0][0]='#';

      for (i=1;i<n;i++)
       {
         d[i][0]=d[i-1][0]+s[i][0]-48;
         p[i][0]=make_pair(i-1,0);

         d[0][i]=d[0][i-1]+s[0][i]-48;
         p[0][i]=make_pair(0,i-1);

         path[0][i]='.';
         path[i][0]='.';
        }

       for (i=1;i<n;i++)
        {
          for (j=1;j<n;j++)
           {
              path[i][j]='.';
              d[i][j]=min(d[i-1][j],d[i][j-1])+s[i][j]-48;

                if (d[i-1][j]>d[i][j-1])p[i][j]=make_pair(i,j-1);
                else p[i][j]=make_pair(i-1,j);

           }
        }

        int A,B;

         l=n-1;
         r=n-1;

          while(l!=-1)
           {
              path[l][r]='#';

              A=p[l][r].first;
              B=p[l][r].second;

              l=A;
              r=B;

           }

           for (i=0;i<n;i++)
            {
              for (j=0;j<n;j++)
               printf ("%c",path[i][j]);
               printf ("\n");
            }


return 0;
}
