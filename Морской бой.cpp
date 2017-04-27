#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
__int64 n,a[1001],k,c=0;
cin>>n>>k;
for (int i=1;i<=n;i++)
{
cin>>a[i];
if (a[i]<=k)c++;
}
cout<<c;
return 0;
}
