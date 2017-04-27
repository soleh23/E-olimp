#include<stdio.h>
int a[205][205],p,p2,n,m,b,i,j,c=0,v=0,l,k,f[15],g=0,u=0;
 main()
 {
      scanf ("%d",&k);
       
       for (i=1;i<=k;i++)
       {
           scanf ("%d%d",&n,&m);
         
          for (j=1;j<=n;j++)
           for (l=1;l<=m;l++)
            scanf ("%d",&a[j][l]);
             
             for (p=1;p<=n;p++)
             {
                 for (p2=1;p2<=m;p2++)
                 {
                    b=a[p][p2];
                    if (b!=0 && b!=-1){
                    if(a[p][p2]==b && a[p][p2+1]==b && a[p+1][p2]==b){a[p][p2]=-1;a[p+1][p2]=-1;a[p][p2+1]=-1;c+=3;}    
                    if(a[p][p2]==b && a[p][p2+1]==b && a[p+1][p2+1]==b){a[p][p2]=-1;a[p+1][p2+1]=-1;a[p][p2+1]=-1;c+=3;}
                    if(a[p][p2]==b && a[p+1][p2]==b && a[p+1][p2+1]==b){a[p][p2]=-1;a[p+1][p2]=-1;a[p+1][p2+1]=-1;c+=3;}
                    if(a[p][p2]==b && a[p+1][p2]==b && a[p+1][p2-1]==b){a[p][p2]=-1;a[p+1][p2]=-1;a[p+1][p2-1]=-1;c+=3;}
                    if(a[p][p2]==b && a[p][p2+1]==b && a[p][p2+2]==b){a[p][p2]=-1;a[p][p2+1]=-1;a[p][p2+2]=-1;c+=3;}
                    if(a[p][p2]==b && a[p+2][p2]==b && a[p+1][p2]==b){a[p][p2]=-1;a[p+1][p2]=-1;a[p+2][p2]=-1;c+=3;}}
                 }
             }
            for (p=1;p<=n;p++)
                 {for (p2=1;p2<=m;p2++)
                  { 
                  if (a[p][p2]==0)v++;
                  if (a[p][p2]>0)u++;
                  }
                 }
             if (v<3 && c+2>=n*m && u==0)f[g]=1,g++;
             else f[g]=0,g++;
             c=0;
             v=0;
       }
for (i=0;i<g;i++)
if (f[i]==1)printf ("YES\n");
else printf ("NO\n");

}
