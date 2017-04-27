#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
 main()
 {
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
__int64 n,c=0,v=0;
cin>>n;
c=n;
while (c!=1)
{
if (c%2==1)
{
 c=c+1;
 v++;
} 
c/=2;
v++;
}   
cout<<v<<endl;
return 0;      
 }
