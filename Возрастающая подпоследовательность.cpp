#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
 main()
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
__int64 h[100001],l=1,b[10001],p=1,f=0,max=-10,i,a[100001],n,c=0,y[10001],k=1;
 cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
if (max<a[i])max=a[i];
}
for (i=1;i<=n;i++)
{
if (a[i]<a[i-1])
a[i]=-1;
}
for (i=1;i<=n;i++)
{
 if (a[i]!=-1)cout<<a[i]<<" ";
}
/*for (i=1;i<p;i++)
{
if (b[i]<b[i+1])cout<<b[i]<<" ";
}*/
/*for (i=0;i<l;i++)
{
cout<<h[i]<<" ";
}
*/system("pause");
return 0;
 }
