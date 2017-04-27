#include <iostream>
#include<algorithm>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    
int a,a1,a2;
cin>>a;
a1=a%10;
a2=a/100;
cout<<abs(a1%a2)<<endl;
return 0;
}
