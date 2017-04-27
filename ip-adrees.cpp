#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
main()
{
char s;            
int a,b,c,d;
cin>>a>>s>>b>>s>>c>>s>>d;
if (a<256 && a>=0 && b<256 && b>=0 && c<256 && c>=0 && d<256 && d>=0 && s=='.')cout<<"1";
else cout<<"0";
cout<<endl;
return 0;
}
