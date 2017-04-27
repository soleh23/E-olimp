#include<stdio.h>
#include<string.h>
int q=0,z=0,i,j,c=0,v=0,k=0,l,g=0,u=0,h=0,l2,a[40011],a2[40001];
char s[40014],s2[40011],s3[40011];
main()
{
scanf ("%s %s",s,s2);

l=strlen (s);
l2=strlen (s2);
for (i=0;i<l;i++)
 {
      s3[v]=s[i];
      v++;
 }
 v=0;
 while (z<2)
 {
 for (i=0;i<l2;i++)
 {
    if (s2[i]==s[q]){a2[u]=i;u++;break;}
 }
 if (u<=v){a2[u]=l;u++;}
 v++;
 q++;
 z++;
}
v=0;
u=1;
z=a2[0];
while (c<l)
{
  while (a2[u]<l2)
  {
    if (v==c)v++;
    if (s3[v]==s2[a2[u]]){v++;a2[u]++;}
    else a2[u]++;
    if (v==l){a[h]=c;h++;a2[u]=l2;}
    if (l2-a2[u]<l-v-1)a2[u]=l2;
  }
 c++;
 v=0;
 u=0;
 a2[u]=z;
}

printf ("%d\n",h);
for (i=0;i<h-1;i++)
printf("%d ",a[i]+1);
printf ("%d\n",a[h-1]+1);

return 0;
} 
