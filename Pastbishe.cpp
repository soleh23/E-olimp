#include<stdio.h>
#include<math.h>
#include<algorithm>
int n,a[100005],b[100005],i,j,c=0,v,p=0,mas=0,mid=999999;
using namespace std;
main()
{
      scanf ("%d",&n);
      
      for (i=1;i<n;i++)
      scanf ("%d%d",&a[i],&b[i]);
     
     
     for (i=1;i<n;i++)
       {
         if (a[i]>b[i])
          {
            swap(a[i],b[i]);
          } 
       }
       
     for (i=1;i<n;i++)
       {
          if (a[i]==1)
          {
            if (b[i]>mas)mas=b[i];
          }
       }
       if (mas==n){printf ("1\n");return 0;}
      for (i=1;i<n;i++)
       {
          if (b[i]==n)
          {
            if (a[i]<mid)mid=a[i];
          }
       }
       if (mid<=mas || mas+1==mid){printf ("2\n");return 0;}
      
       while (mid>mas)
       {
         for (i=1;i<n;i++)
         {
          if (b[i]==n || b[i]==n-1)
          {
            if (a[i]<mid)mid=a[i];
          }
         }
         n=mid;
         c++;
       }
       printf ("%d\n",c+1);

return 0;
}
