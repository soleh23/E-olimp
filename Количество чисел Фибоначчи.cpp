#include<iostream>
#include<math.h>
using namespace std;
 main()
 {  
__int64 c=0,b[1001],p=1,f[1001],n,a=0,a1=0,a2=1;
 cin>>n;
 for (int i=1;i<=n;i++)
 {
 cin>>f[i];
 }
 for (int j=1;j<=n;j++)
 {
 for (int i=2;i<=92;i++)
 {
   a=a1+a2;
   a1=a2;
   a2=a;
 if (f[j]==a)cout<<a<<" ";
 }

}
cout<<c;
 system("pause");
return 0;      
 }
