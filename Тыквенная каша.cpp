#include<iostream>
#include<math.h>
using namespace std;
 main()
 {
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
__int64 min=0,n,a[1001],c=0,i;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
}

for (i=1;i<=n;i++)
{
    for (int j=1;j<=n;j++)
    {
if (a[i]>a[j])swap(a[i],a[j]);
}
}
for (i=1;i<=n;i++)
{
c=a[n];
}
for (i=1;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<c;
cout<<endl;
return 0;
 }
