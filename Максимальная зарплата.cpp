#include<stdio.h>
 main()
 {
double n,c=0,max=0;
while(scanf("%lf",&n)!=EOF)
 {
 if (n>max)max=n;
 }
 printf("%.2lf\n",max);
return 0;      
 }
