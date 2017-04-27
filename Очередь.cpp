#include<stdio.h>
long int i,c=0,v=0,n,k,a[1000001],max1=-1;
main()
{
      scanf ("%ld%ld",&n,&k);
       for (i=1;i<=n;i++)
        scanf ("%ld",&a[i]);
        
        c=k+1;
        
   while (a[c]>0)
   {
     for (i=1;i<=k;i++)
     {
      a[i]--;
      if (a[i]==0)
      {
      a[i]=a[c];
      c++;
      }
     }
  v++;
}

for (i=1;i<=k;i++)
if (max1<a[i])max1=a[i];

 printf ("%ld\n",v+max1);  
}
