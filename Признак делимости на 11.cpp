#include<iostream> 
#include<math.h>   
#include<string.h> 
#include<algorithm>
using namespace std;
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
char s[1000001];
__int64 i,l,c=0,v=0;
cin>>s;
l=strlen(s);
for (i=0;i<l;i++)
{
if (i%2==0)
{
 c+=s[i]-48;
}    
}      
for (i=0;i<l;i++)
{
if (i%2==1)
{
v=v+s[i]-48;
}   
}     
cout<<c*v<<endl;               
return 0;
}
