#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int n,a[1001],b[1001],i,j,p=1,c=0;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
b[p]=a[i];
p++;
}

for (i=1;i<=n;i++)
{
    for (j=i+1;j<=n;j++)
    {
    if (a[i]<a[j])swap(a[i],a[j]);    
    }
}
for (i=1;i<p;i++)
{
 for (j=1;j<=n;j++)
 {
 if (a[j]==b[i]){cout<<j<<" ";return 0;}
 }       
}
system("pause");
return 0;
}
