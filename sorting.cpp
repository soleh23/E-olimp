#include<iostream>  
#include<math.h>    
#include<ctype.h>   
#include<stdio.h>  
int g,max1=-100,min1=999999,n,a[100001],i,j,c=0,v=0,k=1,l=0,h=0;    
using namespace std;
main()              
{                   
  scanf ("%d",&n);
   for (i=1;i<=n;i++)
    scanf ("%d",&a[i]);
   
   for (i=1;i<n;i++)
   if (a[i]<a[i+1])l++;
   
   g=n;
   
   if (n-1==l){printf ("0");return 0;}
 l=0;
 while (l<g-1)
   {
       l=0;
        
         
             for (i=k;i<=n;i++)
               if (a[i]>max1)max1=a[i],c=i;
    
  if (c<n)
  {
   for (i=c;i<n;i++)
      swap (a[i],a[i+1]),h++;
  }   
        for (i=k;i<=n;i++)
          if (a[i]<min1)min1=a[i],v=i;
    
 if (v>k)
 {
   for (i=v;i>k;i--)
      swap (a[i],a[i-1]),h++;
}    
    for (i=1;i<g;i++)
         if (a[i]<a[i+1])l++;
    
    k++;
    n--;
    min1=999999;
    max1=-100;
}
printf ("%d\n",h);
    
return 0;           
}                   
