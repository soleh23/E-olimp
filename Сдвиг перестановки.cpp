#include<iostream>
#include<math.h>
using namespace std;
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
int i,n,a[101],b[101],p=1 ,c=0,min=999999;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
if (min>a[i])min=a[i];
}
cout<<min<<" ";
for (i=1;i<=n;i++)
{
if (min==a[i])a[i]=0;
b[p]=a[i];
p++;
}
for (i=1;i<p-1;i++)
{
cout<<b[i]<<" ";  
}
system("pause");
return 0;
}
