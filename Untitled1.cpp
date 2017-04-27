#include<stdio.h>
#include<string.h>
int z=0,i,j,c=0,v=0,k=0,l,g=0,h=0,l2,a[40001];
char s[40001],s2[40001],s3[40001];
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
while (c<l)
{
  while (k<l2)
  {
    if (v==c)v++;
    if (s3[v]==s2[k]){v++;k++;}
    else k++;
    if (v==l){a[h]=c;h++;k=l2;}
    if (l2-k<l-v-1)k=l2;
  }
 c++;
 v=0;
 k=0;
}

printf ("%d\n",h);
for (i=0;i<h-1;i++)
printf("%d ",a[i]+1);
printf ("%d\n",a[h-1]+1);

return 0;
} 
