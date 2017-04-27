#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int t,r,n,m,i,j,k,l=0,c=0,v=0,u=0,a[1000001],b[1000001];
vector< vector<int> >g;
vector<int>h,h2;
char s[1000001],s2[1000001];
queue<int>q;
int rec (int x)
 {
     if (x==5)
      {
          c=0;
          for (i=1;i<=5;i++)
           {
               if (b[i]==1)c+=a[i];
               else if (b[i]==2)c-=a[i];
               else c*=a[i];
           }
           if (c==23){printf ("Possible\n");exit(0);}
           else return 0;
      }

      b[x+1]=1;
       rec(x+1);

        b[x+1]=2;
         rec(x+1);

          if (x+1>1)
          {
           b[x+1]=3;
           rec(x+1);
          }
 }
  void rec (int l)
   {
       if (l==5)
       {
          for (int i=1;i<=5;i++)
           printf ("%d ",b[i]);
       }
       else
        {
            for (int i=1;i<=n;i++)
             {

             }
        }

   }
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);


  //while (1)
  // {
       scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]);

       if (a[1]+a[2]+a[3]+a[4]+a[5]==0)return 0;

       rec(0);
       printf ("Impossible\n");

//   }


return 0;
}
