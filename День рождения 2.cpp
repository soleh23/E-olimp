#include<iostream>
#include<math.h>
using namespace std;
 main()
 {  
__int64 n,a[101],i,j,c=0;
cin>>n;
for (i=1;i<=n;i++)
{
cin>>a[i];
}
for (i=1;i<=n;i++)
{
    for (int g=1;g<=n;g++)
    {
        for (j=1;j<=n;j++)
        {
        if ((g*12)+(j*31)==a[i])cout<<g<<" "<<j;
        }
    }
}
return 0;      
 }
