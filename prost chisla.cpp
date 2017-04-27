#include<iostream>
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
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
int a,b,check=0;
cin>>a>>b;
if (a==b && pr (a)==1){cout<<a<<endl;return 0;}
for (int i=a;i<b;i++)
{
if (pr(i)==1 )cout<<i<<endl, check ++;
}
if (pr(b)==1)cout<<b<<endl;
if (check == 0) printf ("Absent\n");
return 0;
}
