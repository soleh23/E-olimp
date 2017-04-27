#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
main()
 {
__int64 max2=-10,d=0,g=0,v=0,a,b,c,i,j,max=-10;
cin>>a>>b>>c;
for (i=0;i<=c/a;i++)
{
    for (j=0;j<=c/b;j++)
    {
    v=(a*i)+(b*j);
    d=i;g=j;
    if (d+g>max && v<=c )
    {
    max=d+g;
    }
}
}
cout<<max;
return 0;      
 }
