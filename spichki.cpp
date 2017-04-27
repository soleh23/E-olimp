#include <iostream>
#include<algorithm>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
 int n,c=7,v=10,f=0,g=0,h=0;
 cin>>n;
 /*if (n==1){cout<<"4"<<endl; return 0;}
  if (n==2){cout<<"7"<<endl; return 0;}
   if (n==3){cout<<"10"<<endl; return 0;}
      */
 for (int i=4;i<=n;i+=2)
 {
 g=c+5;
 c=g;

 }
 
  for (int i=5;i<=n;i+=2)
 {
 f=v+5;
 v=f;

 }
 if (n%2==0)cout<<g;
 else cout<<f;
return 0;
}
