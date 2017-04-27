#include<iostream>
#include<math.h>
using namespace std;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,i,c,a[101],b[1001],p=1;
cin>>n;
for (i=1;i<=n;i++) 
{
cin>>a[i];
}
cin>>c;
for (i=1;i<=n;i++)
{
    c=i;
b[p]=a[i];
p++;
}
for (i=1;i<p;i++)
{
cout<<b[i]-a[c];
}
return 0;
}
