#include<iostream>  
#include<math.h>    
#include<ctype.h>   
#include<stdio.h>  
int n,a[100001],i,j,c=0,v=0,k,l;    
using namespace std;
main()              
{                   
  scanf ("%d",&n);
  if (n%2==1)
  {
   for (i=1;i<=n;i++)
    scanf ("%d",&a[i]);
      
      for (i=2;i<=n;i+=2)
      {
        if (abs(a[i-1]-a[i])+abs(a[i+1]-a[i])<3*abs(a[i+1]-a[i-1]))c+=abs(a[i-1]-a[i])+abs(a[i+1]-a[i]);
        else c+=3*abs(a[i+1]-a[i-1]);
      }
    printf ("%d ",c);
              
            for (i=2;i<=n;i+=2)
                {
        if (((a[i-1]-a[i])*(a[i-1]-a[i]))+((a[i+1]-a[i])*(a[i+1]-a[i]))<3*((a[i+1]-a[i-1])*(a[i+1]-a[i-1])))v+=((a[i-1]-a[i])*(a[i-1]-a[i]))+((a[i+1]-a[i])*(a[i+1]-a[i]));
        else v+=3*((a[i+1]-a[i-1])*(a[i+1]-a[i-1]));
                }      
                printf ("%d\n",v);
 }
 else
 {
    for (i=1;i<=n-1;i++)
    scanf ("%d",&a[i]);
      
      for (i=2;i<=n;i+=2)
      {
        if (abs(a[i-1]-a[i])+abs(a[i+1]-a[i])<3*abs(a[i+1]-a[i-1]))c+=abs(a[i-1]-a[i])+abs(a[i+1]-a[i]);
        else c+=3*abs(a[i+1]-a[i-1]);
      }
    printf ("%d ",c+abs(a[n]-a[n-1]));
              
            for (i=2;i<=n-1;i+=2)
                {
        if (((a[i-1]-a[i])*(a[i-1]-a[i]))+((a[i+1]-a[i])*(a[i+1]-a[i]))<3*((a[i+1]-a[i-1])*(a[i+1]-a[i-1])))v+=((a[i-1]-a[i])*(a[i-1]-a[i]))+((a[i+1]-a[i])*(a[i+1]-a[i]));
        else v+=3*((a[i+1]-a[i-1])*(a[i+1]-a[i-1]));
                }      
                printf ("%d\n",v+((a[n]-a[n-1])*(a[n]-a[n-1])));
 }

return 0;           
}                   
