#include<iostream>
#include<math.h>
using namespace std;
 main()
 {  
__int64 n;
 cin>>n;
if (n<=2)cout<<"1";
else if (n%2==1)cout<<(6*(n/7))+(2*(n/3));
else cout<<n-1+n-3;
system("pause");
return 0;      
 }
