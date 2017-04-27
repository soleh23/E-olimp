#include<math.h>
#include<iostream>
#include<stdio.h>
using namespace std;
main()
{

double x1,x2,x3,y1,y2,y3,s1,s2,s3;;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
s1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
s2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
s3=sqrt(s1*s1+s2*s2);
printf ("%.1f",s1*s2/2);
cout<<endl;
return 0;
}

