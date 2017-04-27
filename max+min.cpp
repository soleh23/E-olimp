#include<math.h>
#include<iostream>
using namespace std;
main()
{

int n,a[101],max=0,min=1000;
cin>>n;
for (int i=1;i<=n;i++)
{
   cin>>a[i];
   if (max<a[i])max=a[i];
  if (min>a[i])min=a[i];
}
cout<<max+min;
cout<<endl;
return 0;
}

