#include<iostream>
#include<math.h>
#include<algorithm>
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
int d[1001],p=1,a,b,c=0,i,j;
cin>>a>>b;
for (i=a;i<=b;i++)
{
if (pr(i)==1)c++;
}
cout<<c<<endl;
return 0;
}
