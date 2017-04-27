#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int n,a[10001],i,j,c=0,v=0;
scanf ("%i",&n);

for (i=1;i<=n;i++)
 scanf ("%d",&a[i]);
   
   sort (a+1,a+n+1);
   
    for(i=1;i<=n;i++)
     printf ("%d ",a[i]); 
return 0;
}
