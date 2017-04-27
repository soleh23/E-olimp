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
int v=0,z,m,j,k,l,r,c=0,a[100005],min1=INF,max1=-INF,n=100000,u=131072;
long long int i;
 struct qwe
 {
   int lp,rp,val;
 }b[263000],b2[263000];

void rec (int li,int ri,int vi)
  {
      if (li==b[vi].lp && ri==b[vi].rp)
      {
         if (min1>b[vi].val)min1=b[vi].val;
      }
         else
          {
              if (li<=b[vi*2].rp)rec (li,min(b[vi*2].rp,ri),vi*2);
              if (ri>=b[(vi*2)+1].lp)rec (max(b[(vi*2)+1].lp,li),ri,(vi*2)+1);
          }
  }

void rec2 (int li,int ri,int vi)
  {
      if (li==b2[vi].lp && ri==b2[vi].rp)
      {
         if (max1<b2[vi].val)max1=b2[vi].val;
      }
         else
          {
              if (li<=b2[vi*2].rp)rec2 (li,min(b2[vi*2].rp,ri),vi*2);
              if (ri>=b2[(vi*2)+1].lp)rec2 (max(b2[(vi*2)+1].lp,li),ri,(vi*2)+1);
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
          b[i].val=(st<=n ? a[st] : INF);
          b[i].lp=st;
          b[i].rp=st;

          b2[i].val=(st<=n ? a[st] : -INF);
          b2[i].lp=st;
          b2[i].rp=st;

          st++;
      }

      for (i=u-1;i>=1;i--)
       {
           b[i].val=min(b[i*2].val,b[(i*2)+1].val);
           b[i].lp=b[i*2].lp;
           b[i].rp=b[(i*2)+1].rp;

           b2[i].val=max(b2[i*2].val,b2[(i*2)+1].val);
           b2[i].lp=b2[i*2].lp;
           b2[i].rp=b2[(i*2)+1].rp;
       }



    for (i=1;i<=k;i++)
      {
          scanf ("%d%d",&l,&r);
          if (l>0)
           {
               int y=l,y2=r;
              rec (l,r,1);
              rec2(y,y2,1);
              printf ("%d\n",max1-min1);
           }

           else
            {
                l*=-1;
                l+=(u-1);
                b[l].val=r;

                int yz=l;
                int x=0;
                 while(l!=1)
                   {
                      x=l%2;
                      if (x==1 && b[l].val<b[l-1].val)b[l/2].val=b[l].val,l/=2;
                      else if (x==1)b[l/2].val=b[l-1].val,l/=2;
                      if (x==0 && b[l].val<b[l+1].val)b[l/2].val=b[l].val,l/=2;
                      else if (x==0)b[l/2].val=b[l+1].val,l/=2;
                   }


                   x=0;
                   l=yz;
                   b2[l].val=r;

                 while(l!=1)
                   {
                      x=l%2;
                      if (x==1 && b2[l-1].val<b2[l].val)b2[l/2].val=b2[l].val,l/=2;
                      else if (x==1) b2[l/2].val=b2[l-1].val,l/=2;
                      if (x==0 && b2[l+1].val<b2[l].val)b2[l/2].val=b2[l].val,l/=2;
                      else if (x==0)b2[l/2].val=b2[l+1].val,l/=2;
                   }

            }


          max1=-INF;
          min1=INF;
      }



return 0;
 }
