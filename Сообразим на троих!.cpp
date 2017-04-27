#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
main()
{
char s[261];
int a2[101],k=0,l=0,v=1,c=0,a[101],p=1;
cin>>s;
l=strlen(s);
for (int i=l-1;i>=0;i--)
{
    c+=s[i]-48;
}
if (c%3==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
