#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
int l,p=1,n,a[1001],c=1,v=0;
cin>>n;
if (n==0){cout<<"0"<<endl;return 0;}
while(n>0)
{
a[p]=n%10;
p++;
n/=10;
}
for (int i=1;i<p;i++)
{
cout<<a[i];
}
cout<<endl;
return 0;
}
