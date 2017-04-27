#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
__int64 l,p=1,n,a[1001],c=1,v=0;
cin>>n;
if (n==0){cout<<"0"<<endl;return 0;}
while(n>0)
{
          a[p]=n%10;
          p++;
          n/=10;
}
while(n<0)
{
          a[p]=n%10;
          p++;
          n/=10;
}
for (int i=1;i<p;i++)
{
    if (a[i]%2==0)
    {
       c*=a[i];              
       v++;
    }
}
if (v>0)cout<<c<<endl;
else cout<<"-1"<<endl;
return 0;
}
