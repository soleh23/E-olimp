#include<iostream>
#include<math.h>
using namespace std;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,i,c=0,v=4,h=2;
cin>>n;
if (n==1){cout<<"2"<<endl;return 0;}
else if (n==2){cout<<"4"<<endl;return 0;}
for(i=3;i<=n;i++)
{
c=v+h;
h=v;
v=c;
}
cout<<c<<endl;
return 0;
}
