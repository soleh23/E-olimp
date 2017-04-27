#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
 main()
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int v=0,i,j,n;
double c=0,a[101];
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
}
for (i=1;i<=n;i++)
{
if (a[i]>0 && i%3==0)
{
c+=a[i];
v++;
}
}
cout<<v<<" ";
printf ("%.2lf\n",c);
return 0;
 }
