#include <iostream>
#include<algorithm>
using namespace std;
main()
 {
// freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int a,b,c,d,n;
cin>>n;
a=n/1000;
b=n/100%10;
c=n/10%10;
d=n%10;
cout<<a<<d;
cout<<endl;
return 0;
}
