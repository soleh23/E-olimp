#include <iostream>
#include<stdio.h>
#include<math.h>
__int64 nod(__int64 x,__int64 y)
 {
if (x!=0)return nod(y%x,x);
else return y;
 }
__int64 nok (__int64 x,__int64 y)
 {
if (x==y)return x;
else return ((x*y)/nod (x,y));
 }
using namespace std;
 main()
 {
__int64 a4,a;
cin>>a>>a4;
cout<<nok(a,a4)<<endl;
return 0;
 }
