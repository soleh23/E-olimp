#include<iostream>  
#include<math.h>    
#include<ctype.h>   
#include<stdio.h>  
int z=0,g=0,q=0,n,a[100009],i,j,c=0,v=0,k=1,l=0,h=0;    
using namespace std;
main()              
{                   
  scanf ("%d",&n);
   
   v=n*n;
     c=(v*(v+1))/2;
   l=c/n;
 if (n%2==0)
 {  
  while (z<n)
  {
  for (j=((n*n)/2)-((n/2)-2);j<=((n*n)/2)+((n/2)-1);j++)
  {
  a[h]=j;
  h++;
  }
  printf ("%d ",k);
  for (i=0;i<h/2;i++)
  printf ("%d ",a[i]-g);
  for (i=h/2;i<h;i++)
  printf ("%d ",a[i]+g);
  printf ("%d\n",(n*n)-g);
 
 z++;
 h=0;
 k++;
 g++;
  }                                                                                                              
} 
if (n%2==1)
{
           if (n==3){printf ("1 5 9\n2 6 7\n3 4 8\n");return 0;}
          printf ("-1/n"); 
}
return 0;           
}                   
