#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
__int64 a[1001],b[10001],n,c=0,v=0;
cin>>n;
 for (int i=1;i<=n;i++)
 {
 cin>>a[i]>>b[i];
 }
 sort(b+1,b+n+1);
 for (int i=1;i<=n;i++)
 cout<<a[i]<<" "<<b[i]<<endl;
 system("pause");
return 0;
}
