#include<iostream>
#include<math.h>
using namespace std;
main()
{
int n,a[10001],i;
cin>>n;

for(i=1;i<=n;i++)
{
cin>>a[i];
}

cout<<a[n]<<" ";
for ( i=1;i<n-1;i++)
{cout<<a[i]<<" ";}
cout<<a[n-1];
cout<<endl;
return 0;
}
