#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
main()
{
int c=0,n,i;
cin>>n;
if (n==1){cout<<"1"<<endl;return 0;}
else if (n==2){cout<<"2"<<endl;return 0;}
for (i=3;i<=n;i++)
{c+=3;}
cout<<c;
return 0;
}
