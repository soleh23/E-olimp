#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
__int64 e=0,v=0,a,b,c,d;
cin>>a;
b=a/100;
c=a/10%10;
d=a%10;
e=(b*c*d);
v=(b+c+d);
if (e<=v)cout<<abs(e-v)<<endl;
else cout<<(v-e);
return 0;
}
