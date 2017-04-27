#include<iostream>
#include<math.h>
using namespace std;
main()
{
__int64 k,b,c=0,v=0,h=0,i,j,a[1001],n,max=-10;      
cin>>n>>k;
for (i=1;i<=n;i++)
{
cin>>a[i];
}
for (i=1;i<=n;i++)
{
c=a[i]+a[i+1];
if (max<c)max=c;
}
cout<<max<<endl;
return 0;
}
