#include<stdio.h>
 main()
 {
double n,min=99999;
while(scanf("%lf",&n)!=EOF)
 {
 if (n<min)min=n;
 }
 printf("%.2lf\n",min);
return 0;      
 }
