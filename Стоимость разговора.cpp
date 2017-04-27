#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;                      
 main()                                    
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
double a,b,c;
double v=0;
 cin>>a>>b>>c;
 v=((c/60)*b)+a;
 if (v>0)cout<<(v)<<endl;
else cout<<-1*v<<endl;
return 0;
 }
