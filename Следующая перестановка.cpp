#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
main()
{
__int64 g=0,a[100001],i,j,n,c=0,v=0;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
}
for (i=n;i>1;i--)
{
cout<<abs(a[i])<<" ";
}
cout<<abs(a[1])<<endl;
return 0;
}
