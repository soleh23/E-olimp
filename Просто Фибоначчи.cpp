#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<ctype.h>
using namespace std;
main()
{
int n,m;
cin>>n>>m;
if (n+((n+1)*2)==m)cout<<"2";
if (n+(n+1)+((n+2)*2)==m)cout<<"3";
if (n+(n+1)+n+2+((n+3)*2)==m)cout<<"4";
if (n+(n+1)+n+2+n+3+((n+4)*2)==m)cout<<"5";
if (n+(n+1)+n+2+n+3+n+4+((n+5)*2)==m)cout<<"6";
if (n+(n+1)+n+2+n+3+n+4+n+5+((n+6)*2)==m)cout<<"7";
if (n+(n+1)+n+2+n+3+n+4+n+5+n+6+((n+7)*2)==m)cout<<"8";
if (n+(n+1)+n+2+n+3+n+4+n+5+n+6+n+7+((n+8)*2)==m)cout<<"9";
if (n+(n+1)+n+2+n+3+n+4+n+5+n+6+n+7+n+8+((n+9)*2)==m)cout<<"10";
if (n+(n+1)+n+2+n+3+n+4+n+5+n+6+n+7+n+8+n+9+((n+10)*2)==m)cout<<"11";
if (n+(n+1)+n+2+n+3+n+4+n+5+n+6+n+7+n+8+n+9+n+10+((n+11)*2)==m)cout<<"12";
if (n+(n+1)+n+2+n+3+n+4+n+5+n+6+n+7+n+8+n+9+n+10+n+11+((n+12)*2)==m)cout<<"13";
cout<<endl;
return 0;
}
