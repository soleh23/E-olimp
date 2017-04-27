#include <iostream>
#include<stdio.h>
#include<math.h>
int pr(int x)
{
 if (x==2 || x==3 || x==5)return 1;
 if (x%2==0 || x%3==0 ||x%5==0)return 0;
 for (int i=3;i*i<=x;i+=2)
 if (x%i==0)return 0;
 return 1;
}
using namespace std;
main()
{
int v=0,h[1001],o=1,c,n,a[100001],b[10001],p=1;
for (int i=1;i<=33347;i++)
{
if (pr(i)==1)
{
b[p]=i;p++;
}
}
cin>>c;
for (int i=2;i<p;i++)
{
  v=i;  
}
cout<<v;
system("pause");
return 0;
}
