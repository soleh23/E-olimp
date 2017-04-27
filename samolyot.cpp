#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
 main()
 {
char s;
int a,b,c,d,e,f,g,h,r=0,v=0;
cin>>a>>s>>b>>c>>s>>d>>e>>s>>f>>g>>s>>h;
c=abs (1440-((a*60)+b))-(1440-((c*60)+d));
v=abs (1440-((e*60)+f))-(1440-((g*60)+h));
cout<<abs(c-v);
return 0;
 }
