#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int a,b,c;
cin>>a>>b>>c;
if (a==0 && b==0 && c==0){cout<<"0"<<endl;return 0;}
if (a>1)cout<<a<<"x";
if (a<-1)cout<<a<<"x";
if (a==0)cout<<"";
if (a==1)cout<<"x";
if (a==-1)cout<<"-x";

if (b>1)cout<<"+"<<b<<"y";
if (b<-1)cout<<b<<"y";
if (b==0)cout<<"";
if (b==1)cout<<"+y";
if (b==-1)cout<<"-y";

if (c>1)cout<<"+"<<c;
if (c<-1)cout<<"-"<<c;
if (c==0)cout<<"";
if (c==1)cout<<"+1";
if (c==-1)cout<<"-1";
cout<<endl;
return 0;
}
