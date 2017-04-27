#include<stdio.h>
#include<algorithm>
main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
double n,max=0,min=1001;
while(scanf("%lf",&n)!=EOF)
{
if (n<min)min=n;
if (n>max)max=n;
}
printf("%.2lf\n",max-min);
return 0;
}
