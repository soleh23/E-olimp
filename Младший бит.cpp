#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<algorithm>
using namespace std;
int k=0,a[100001],b[100001],c=0,v=0,i,n,m=1,l=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
for (;;)
{
    scanf("%d",&n);
if (n==0)return 0;
 
while (n>0)
{
 a[l]=n%2;
 n/=2;
 l++;
}
   for (i=0;i<l;i++)
   {
       if (a[i]==0)c++;
       else break;
   }
   
   for (i=0;i<=c;i++)
   {
     v+=a[i]*pow(2,k);
     k++;
   }
   
   printf ("%d\n",v);
   
   k=0;
   v=0;
   c=0;
   l=0;
  
}
return 0;   
}
