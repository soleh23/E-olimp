#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
main()
{
__int64 g=0,a[10001],i,j,n,c=0,v=0;
cin>>n;
g=n;
for (i=1;i<=n;i++)
{
cin>>a[i];
c+=a[i];
}
for (i=1;i<=n;i++)
{
if (a[i]>c/g)v++;
}
cout<<v<<endl;
return 0;
}
