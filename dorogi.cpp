#include<iostream>
#include<math.h>
using namespace std;
main()
{
    freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
int a[10001],n,i,c=0;
cin>>n;
for (i=1;i<=n*n;i++)
{
    cin>>a[i];
    if (a[i]==1)c++;
}
cout<<c/2<<endl;

  return 0;
}
