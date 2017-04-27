#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
 main()
 {
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
__int64 a[1001],p=1,c=0,i,l,n=0,v=0;
char s[101];
cin>>s;
l=strlen(s);
for (i=l-1;i>=0;i--)
c+=s[i]-48;
while (c>9)
{
while (c>0)
{
a[p]=c%10;
p++;
c/=10;
}
c=0;
for (i=1;i<p;i++)
{
c+=a[i];
}
v++;
}
cout<<c<<" "<<v+1;
system("pause");
return 0;      
 }
