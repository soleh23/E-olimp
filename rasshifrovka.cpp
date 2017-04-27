#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
char s[401][401];
int g,l=0,i,j,c=0,v=0,n,m,d,u=0,max1=-1;
long long int k;
 main()
 {

 scanf ("%d%d%d%d",&n,&m,&d,&k);
   
    for (i=0;i<n;i++)
     scanf ("%s",&s[i]);
       
   u=((n-d)+1)+((m-d)+1);
   int y=d;
   g=d;
   int bl=0,wh=0;
     for(i=0;i<n;i++)
      {
        for (j=0;j<m;j++)
         {
           if (s[i][j]=='B')bl++;
           else wh++;
         }
      }
      u+=900;
   while (u>0)
   {   
     for(i=v;i<y;i++)
      {
        for (j=c;j<d;j++)
         {
           if (s[i][j]=='B')l++;
         }
      }
      if (max1<l)max1=l;
      l=0;
      if (d==m || m==1)
       {
         c=0;
         v++;
         y++;
         d=g;       
       }
      else {
      c++;
      d++;
      }
    u--;
   }
    int t;
    if (n>=g && m>=g)t=(g*g)-max1;
    else if (n>=g && m<g)t=(m*g)-max1;
    else if (n<g && m>=g)t=(n*g)-max1; 
    
// printf ("%d %d %d",wh,bl,max1);
   if (k%2==1) printf ("%d %d\n",wh+max1,bl-max1);
   else printf ("%d %d\n",wh-t,bl+t);


return 0;
 }
