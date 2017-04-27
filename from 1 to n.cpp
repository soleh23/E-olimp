#include<iostream>
#include<math.h>
using namespace std;
main()
{
int a;
cin>>a;
if (a>0)cout<<(a*(a+1))/2<<endl;
if (a<0)cout<<((a*(a+1))/-2)+(a+1)<<endl;
if (a==0)cout<<1-a<<endl;
return 0;
}
