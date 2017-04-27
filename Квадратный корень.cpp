#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    
double c=0,a1,a2,a3;
int a;
cin>>a;
a1=a/100;
a2=a/10%10;
a3=a%10;
c=a1+a2+a3;
printf("%.3lf",sqrt(c));
cout<<endl;
return 0;
}
