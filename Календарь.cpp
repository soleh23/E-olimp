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
int max1=-INF,n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001],d[1000001];
map<int,int>f;
 main()
 {

  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);

 scanf ("%d",&n);

  for (i=1;i<=n;i++)
   scanf ("%d",&a[i]);

  for (i=1;i<=n;i++){
   scanf ("%d",&b[i]);
   d[b[i]]=i;}


    for (i=1;i<=n;i++)
       f[i-d[a[i]]]++;

     for(i=-n;i<=n;i++)
      {
         if (f[i]>max1)max1=f[i];
      }

      printf("%d\n",max1);



return 0;
 }
