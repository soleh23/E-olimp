#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
__int64 d[1001],p=1,max=-10,n,a[1001],b[1001],v=0;
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a[i]>>b[i];
}
for (int i=1;i<=n;i++)
{
if (b[i]==0)
{
a[i]=0;
v++;
}
}
if (v==n){cout<<"-1"<<endl; return 0;}
for (int i=1;i<=n;i++)
{
if (max<a[i])max=a[i];
}
for (int i=1;i<=n;i++)
{
if (a[i]==max){cout<<i<<endl; return 0;}
}
return 0;
}
