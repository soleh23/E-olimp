#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
 main()
 {
char s1[1001],s2[1001];
int l,m,g=0,c=0,v=0;
while (scanf("%s",s1)!=EOF)
{
l=strlen(s1);
c=l-1;
v=0;
g=0;
while(v<=((l-1)/2) && c>=((l-1)/2))
{
if (s1[v]==s1[c])
{
c--;
v++;
g++;
}
else 
{
c--;
v++;
}
}
cout<<g<<endl;
}
return 0;      
 }
