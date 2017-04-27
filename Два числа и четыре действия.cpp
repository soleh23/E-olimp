#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
double abs(double a)
{
if (a>=0)return (a);
else return (-1*a);
}
using namespace std;
main()
{
//      freopen("input.txt","r",stdin);
//      freopen("output.txt","w",stdout);
int n;
double c,max=-100,a[1001];
cin>>n;
for (int i=1;i<=n;i++)
{
cin>>a[i];
if (max<a[i])max=a[i];
}
c=abs(max);
printf("%.2lf",c);
cout<<endl;
return 0;
}
