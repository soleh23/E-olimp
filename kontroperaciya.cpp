#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int min=999,max=0,i,j,c=0,n,a[1001],b[1001],p=1;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
}
for (i=1;i<=n;i++)
{
if (a[i]>max)max=a[i];
}
for (i=1;i<=n;i++)
{
if (min>a[i])min=a[i];
}
for (i=1;i<=n;i++)
{
if (max==a[i])a[i]=min;
}
for (i=1;i<=n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
