#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
__int64 n,m,a,c=0,v=0,h=0;
cin>>n>>m>>a;
c=min(n,m);
v=min(c,a);
h=n+m+a;
cout<<abs(h-v);
cout<<endl;
return 0;
}
