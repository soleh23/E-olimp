#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
char s[1001];
int l,p=1,n,a[1001],c=1,v=0;
cin>>s;
l=strlen(s);
if (s[0]==s[l-1] && s[1]==s[l-2] && s[2]==s[l-3]){cout<<"Yes"<<endl;return 0;}
else {cout<<"No"<<endl;return 0;}
return 0;
}
