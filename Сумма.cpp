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
long long int n,m,i,j,k,l,c=0,v=0,u=0,r,len;
long long int sum=0,x;
char ch;
 struct qwe
 {
     long long int vl,sm,t1;
 }b[100005];

 struct qwe2
  {
      long long int in,t2;
  }a[100005];

 main()
 {

  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);

  scanf ("%lld%lld",&n,&k);

  int len = sqrt(n*1.0);

  for (i=0;i<n;i++)
   b[i/len].sm=0,b[i/len].vl=0,a[i].in=0,a[i].t2=0,b[i/len].t1=0;

    for (i=0;i<k;i++)
     {
         cin>>ch;
          scanf ("%lld%lld",&l,&r);
          l--;r--;


         if (ch=='A')
         {
             scanf("%lld",&x);
               u++;
               for (j=l;j<=r;)
                {
                    if (j%len==0 && j+len-1<=r)
                     {
                         b[j/len].sm=x*len;
                         b[j/len].vl=x;
                         b[j/len].t1=u;

                          j+=len;
                     }
                     else
                      {
                          if (a[j].in==0)b[j/len].sm-=b[j/len].vl;
                          else if (b[j/len].t1<a[j].t2)b[j/len].sm-=a[j].in;
                          else b[j/len].sm-=b[j/len].vl;

                          a[j].in=x;
                          a[j].t2=u;
                          b[j/len].sm+=x;

                          j++;
                      }
                }

         }
           else
            {
              sum=0;

                for (j=l;j<=r;)
                 {
                     if (j%len==0 && j+len-1<=r)
                      {
                          sum+=b[j/len].sm;
                          j+=len;
                      }
                      else
                       {
                           if (b[j/len].t1<a[j].t2)sum+=a[j].in;
                           else sum+=b[j/len].vl;
                           j++;
                       }
                 }
                 printf ("%lld\n",sum);


            }
     }


return 0;
 }
