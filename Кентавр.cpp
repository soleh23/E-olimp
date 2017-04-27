#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
int i,j,a[101][101]={0},n,d,f,c=0,v=0;
cin>>n>>d>>f;
for (i=1;i<=n;i++)
{
  for (j=1;j<=n;j++)
 {
 a[d][f]=-5;
 d++;
 f++;
 if (a[i][j]==-5)c++;
 }
}
/*for (i=1;i<=n;i++)
{
  for (j=1;j<=n;j++)
 {
 a[d][f]=-5;
 d--;
 f--;
 if (a[i][j]==-5)c++;
 }
}*/
cout<<c-2;
    
  system("pause");
return 0;
}
