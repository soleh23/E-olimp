#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
__int64 c=0,n,a[30005],max,min;

max =-300001;
min =300001;

cin>>n;

for (int i=1;i<=n;i++)
{
cin>>a[i];
if (max<a[i] ){max=a[i];}
if (min>a[i]){min=a[i];}
}      
if (n==1 || n==0)cout<<"Ooops!"<<endl;
else cout<<abs(min)<<" "<<abs(max)<<endl;
return 0; 
}
