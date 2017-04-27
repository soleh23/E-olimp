#include <iostream>
using namespace std;
main()
 {
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
int m,l,p=1,n,a[101],c=1,v=0;
cin>>n>>m;
if (n>0)
{
while(n>0)
{
a[p]=n%10;
p++;
n/=10;
}
for (int i=1;i<p;i++)
{
if (a[i]==m)v++;
}

cout<<v<<endl;
}
else
{
while(n<0)
{
a[p]=n%10;
p++;
n/=10;
}
for (int i=1;i<p;i++)
{
if (-1*a[i]==m)v++;
}

cout<<v<<endl;
}
return 0;
}
