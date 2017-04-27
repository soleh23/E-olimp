#include<stdio.h>
#include<string.h>
#include<math.h>
#include<cctype>
#include<algorithm>
main()
 {
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
__int64 m,a[10001],p=1,c=0,i,l,n=0,v=0;
char s[10001],s1[10001];
scanf("%s",&s);
l=strlen(s);
if (l==1 && s[0]-48==0){printf("0\n"); return 0;}
for (i=l-1;i>=0;i--)
c+=s[i]-48;
while (c>9)
{
itoa(c,s1,10);
m=strlen(s1);
c=0;
for (i=m-1;i>=0;i--)
{
c+=s1[i]-48;
}
v++;
}
printf ("%I64d\n",c);
return 0;      
 }
