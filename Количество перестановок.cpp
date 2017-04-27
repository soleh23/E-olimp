#include <stdio.h>         
#include<iostream> 
using namespace std;            
main()                                    
 {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
__int64 s[100001],p=1,a,n,c=1,v=0,g=2;
scanf("%I64d",&n);
if (n==1){cout<<"1"<<endl; return 0;}
for (int i=2;i<=n;i++)
{
v=c*i;
c=v;
}
cout<<v<<endl;
 return 0;
}
