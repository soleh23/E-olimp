#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<stdlib.h>
#include<map>
#define mp make_pair
using namespace std;
const int INF=1000000000;
int j,k,l,m,n=100000,v=0,c=0,u=131072,a[1000001],min1=INF,max1=-INF;
vector< vector<int> >g;
bool used[1000001];
long long int i;
struct qwe{
int lp,rp,val;
}tmin[300001],tmax[300001];

 void rec1 (int li,int ri,int vi)
  {
      if (li==tmin[vi].lp && ri==tmin[vi].rp)
       {
           if (min1>tmin[vi].val)min1=tmin[vi].val;
       }
         else
          {
              if (li<=tmin[vi*2].rp)rec1(li,min(tmin[vi*2].rp,ri),vi*2);
              if (ri>=tmin[(vi*2)+1].lp)rec1(max(tmin[(vi*2)+1].lp,li),ri,(vi*2)+1);
          }
  }

  void rec2 (int li,int ri,int vi)
  {
      if (li==tmax[vi].lp && ri==tmax[vi].rp)
       {
           if (max1<tmax[vi].val)max1=tmax[vi].val;
       }
         else
          {
              if (li<=tmax[vi*2].rp)rec2(li,min(tmax[vi*2].rp,ri),vi*2);
              if (ri>=tmax[(vi*2)+1].lp)rec2(max(tmax[(vi*2)+1].lp,li),ri,(vi*2)+1);
          }
  }


main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

    scanf ("%d",&k);

    for (i=1;i<=n;i++){
          v=(((i%12345)*(i%12345)%12345)+(((i%23456)*(i%23456)*(i%23456))%23456));
         a[i]=v;
     }

     int st=1;


      for (i=u;i<2*u;i++)
       {
          if (st>100000)
           {
               tmin[i].val=INF;
               tmax[i].val=-INF;
           }
          else{
               tmin[i].val=a[st];
               tmax[i].val=a[st];
          }

          tmin[i].lp=st;
          tmin[i].rp=st;

          tmax[i].lp=st;
          tmax[i].rp=st;

          st++;
       }

      for (i=u-1;i>=1;i--)
       {
         tmin[i].val=min(tmin[i*2].val,tmin[(i*2)+1].val);
         tmax[i].val=max(tmax[i*2].val,tmax[(i*2)+1].val);

          tmin[i].lp=tmin[i*2].lp;
          tmin[i].rp=tmin[(i*2)+1].rp;

          tmax[i].lp=tmax[i*2].lp;
          tmax[i].rp=tmax[(i*2)+1].rp;
       }

        for (i=1;i<=k;i++)
         {
             int a,b;
             scanf ("%d%d",&a,&b);

             if (a>0)
              {
                  rec1(a,b,1);
                  rec2(a,b,1);
                  printf ("%d\n",max1-min1);
              }
              else
               {
                   a*=-1;
                   a+=u-1;
                   tmin[a].val=b;
                   int x=0,gh=a;


                   while (a!=1)
                    {
                        x=a%2;
                        if (x==1 && tmin[a].val<tmin[a-1].val)tmin[a/2].val=tmin[a].val,a/=2;
                        else if (x==1)tmin[a/2].val=tmin[a-1].val,a/=2;
                        if (x==0 && tmin[a].val<tmin[a+1].val)tmin[a/2].val=tmin[a].val,a/=2;
                        else if (x==0)tmin[a/2].val=tmin[a+1].val,a/=2;
                    }

                    a=gh;x=0;
                    tmax[a].val=b;

                    while (a!=1)
                    {
                        x=a%2;
                        if (x==1 && tmax[a].val>tmax[a-1].val)tmax[a/2].val=tmax[a].val,a/=2;
                        else if (x==1)tmax[a/2].val=tmax[a-1].val,a/=2;
                        if (x==0 && tmax[a].val>tmax[a+1].val)tmax[a/2].val=tmax[a].val,a/=2;
                        else if (x==0)tmax[a/2].val=tmax[a+1].val,a/=2;
                    }

               }
                  max1=-INF;
                  min1=INF;

         }



return 0;
}
