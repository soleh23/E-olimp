#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int a[10001],l=0,l2,i,n,m,c=0,v=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf("%d%d",&n,&m);
 
 for (i=1;i<=n;i++)
 {
   scanf ("%d",&a[i]);
  while (a[i]>0)
  {
   l=0;c=a[i];
   while (l==0)
    {
       v=(l+c)/2;  
      if (pow(v,m)>a[i])v--;
      else l=pow(v,m);
    }
    
   a[i]-=l; l2++; 
  } 
    printf ("%d",l2);
    l2=0;
    
 }

getchar ();
getchar ();
return 0;
}
