#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int n,m,i,j,k,l,c=0,v=0,a[1000001],b[1000001];
vector< vector<int> >g,g2;
vector<int>order,q;
bool used[1000001];
main()
 {
  scanf ("%d%d",&n,&m);

    for (i=1;i<=n;i++)b[i]=-1,used[i]=false;

   for (i=1;i<=m;i++)
    {
       scanf ("%d%d%d",&j,&k,&l);
       a[j]++;
       if (a[j]==1)b[j]=i;
       else b[j]=-1;
       a[k]++;
       if (a[k]==1)b[k]=i;
       else b[k]=-1;
       a[l]++;
       if (a[l]==1)b[l]=i;
       else b[l]=-1;
    }


        for (i=1;i<=n;i++)
         if (b[i]!=-1 && !used[b[i]])v++,used[b[i]]=true;


     for (i=1;i<=n;i++)
      used[i]=false;

        printf ("%d\n",v);
        for (i=1;i<=n;i++)
         if (b[i]!=-1 && !used[b[i]])
           {
               q.push_back(b[i]);
                used[b[i]]=true;
           }

          if (v>0){

            sort (q.begin(),q.end());

           for (i=0;i<q.size()-1;i++)
           printf ("%d ",q[i]);
           printf ("%d\n",q[i]);
          }


  return 0;
 }
