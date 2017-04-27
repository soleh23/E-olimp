#include<stdio.h>
main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
int n,c=0,i,j,k,a;
scanf("%d",&n);
for (i=1;i<n;i++)
{
 for (j=i;j<n;j++)
   {
    for (k=j;k<n;k++)
     {
       a=n-i-j-k;              
      if (a>=k)c++; 
     }
   }
}
printf("%d",c);
return 0; 
}
