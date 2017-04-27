#include<iostream> 
#include<math.h>   
#include<string.h> 
#include<algorithm>
using namespace std;
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
__int64 n,c=0,v=0;
cin>>n;
v=n;
while (n>=100)
{
if (n>=500)
{
n-=500;
c++;
}
else if (n>=200)
{
n-=200;
c++;
}
else if (n>=100)
{
n-=100;
c++;
}
}
while (n>=10)
{
if (n>=50)
{
n-=50;
c++;
}
else if (n>=20)
{
n-=20;
c++;
}
else if (n>=10)
{
n-=10;
c++;
}
}   
if (v%10==0)cout<<c<<endl;          
else cout<<"-1"<<endl;
return 0;
}
