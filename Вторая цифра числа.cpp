#include <iostream>
#include<string.h>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    
char s[1001];
cin>>s;
if (s[0]!='-')cout<<s[1]<<endl;
else cout<<s[2]<<endl;
return 0;
}
