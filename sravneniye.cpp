#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
char s1[1001],s2[1001];
__int64 c=0,v=0,l,m; 
cin>>s1>>s2; 
l=strlen(s1);
m=strlen(s2);
if (s1[0]-48>s2[0]-48 && l==1 && m==1)cout<<">"<<endl;
else if (s1[0]-48<s2[0]-48&& l==1 && m==1)cout<<"<"<<endl;
else if (s1[0]-48==s2[0]-48 &&l==1 && m==1)cout<<"="<<endl;
for(int i=0;i<m;i++)
{
        for (int j=1;j<=l;j++)
        {
if (s1[j+1]-48>s2[i+1]-48 && s1[j]-48>=s2[i]-48 && l>=m){cout<<">"<<endl;return 0;}
if (s1[j+1]-48<s2[i+1]-48 && s1[j]-48<=s2[i]-48 && l<=m){cout<<"<"<<endl;return 0;}
else if (s1[i]-48==s2[i]-48 && l==m){cout<<"="<<endl;return 0;}
}        
}                          
return 0;
}
