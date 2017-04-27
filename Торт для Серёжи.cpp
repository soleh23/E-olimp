#include<iostream>
#include<math.h>
using namespace std;
main()
{
int d=0,n,c=2,i;
cin>>n;
for (i=3;i<=n;i+=2)
{
c=d+c;
d++;
}
cout<<c;
return 0;
}
