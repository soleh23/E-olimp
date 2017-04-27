#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
 main()
 {
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int a[1001],p=1,v=0,i,j,n,m,min=0,c=0;
cin>>n>>m;
for (i=n;i<=m;i++)
{
while (i>0)
{
a[p]=i%10;
p++;
i/=10;
}
for(i=1;i<p;i++)
{
c+=a[i];
}
}
cout<<c;
cout<<endl;
return 0;      
 }
