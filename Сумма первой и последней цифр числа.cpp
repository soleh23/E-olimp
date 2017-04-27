#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
main()
 {
char s[1001];
int l;
cin>>s;
l=strlen(s);
if (s[0]!='-')cout<<(s[l-1]+s[0])-96<<endl;
else if (s[0]=='-')cout<<(s[l-1]+s[1])-96<<endl;
return 0;
}
