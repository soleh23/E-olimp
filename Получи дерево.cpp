#include<stdio.h>     
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
int n,m,i,a[1001],b[1001];
scanf ("%d %d",&n,&m);

  for (i=1;i<=m;i++)
  scanf ("%d %d",&a[i],&b[i]);
      
     for (i=1;i<=m;i++)
     {
      if (a[i]-b[i]==1 || a[i]-b[i]==-1)printf ("%d %d\n",a[i],b[i]);
     }
    getchar ();
    getchar ();
return 0;
}
