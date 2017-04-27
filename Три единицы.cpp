#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
 main()
 {
char s[1001];
int l,i,a[1001],b=1,c=0,d=0,e=0,f=0,g=0,h=0,j,v=0,z=0;
 cin>>s;
 l=strlen(s);
sort(s,s+l);
for (i=0;i<l;i++)
{
if (s[i]==s[i+1])s[i]=' ';
}
for (i=0;i<l;i++)
{
    if (s[i]!=' ')c++;
}
cout<<10-c<<endl;
for (i=0;i<=9;i++)
{
    for (j=0;j<l;j++)
    {
    if (s[j]-48!=i)cout<<i<<" ";
    }
}
system("pause");
return 0;      
 }
