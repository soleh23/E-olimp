#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<set>
using namespace std;
const int INF=1000000000;
int A,B,t=0,r=0,n,m,i,j=0,k,l,v=0,u=0,a[101][101],b[1000001],d[1000001];
vector< vector< pair<int,int> > >g;
vector<int>h,h2;
char s1[1000001],s2[1000001];
queue<int>q;
set< pair<int,int> >s;
bool used[1000001];
main()
{
//   freopen ("input.txt","r",stdin);
//   freopen ("output.txt","w",stdout);

   scanf ("%d%d",&n,&m);


   a[1][1]=1;

   for (i=2;i<=n;i++)
    for (j=2;j<=m;j++)
     a[i][j]=a[i-1][j-2]+a[i-2][j-1];

     printf ("%d\n",a[n][m]);


return 0;
}
