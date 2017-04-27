#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int n,c=0;
cin>>n;
if (n==1){cout<<"0"<<endl;return 0;}
if (n%2==0)cout<<n/2;
else cout<<n;
cout<<endl;
return 0;
}
