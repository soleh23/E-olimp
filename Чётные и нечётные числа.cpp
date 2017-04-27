#include<iostream>
using namespace std;
main()
{
int a,b,c,v=0,n=0;
cin>>a>>b>>c;

if (a%2==0  || b%2==0  || c%2==0  )v++;
if (a%2==1 || b%2==1 || c%2==1  )n++;
if (n>0 && v>0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
