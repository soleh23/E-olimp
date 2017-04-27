#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<algorithm>
using namespace std;
int k,a[100001],b[100001],c[100001],v=0,i,n,m=1,h[9],l=0;
 int sr(int a,int b,int c)
 {
     h[1]=a;
     h[2]=b;
     h[3]=c;
   sort (h+1,h+4);
  
  return h[2];
 }

    
using namespace std;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

 scanf("%d",&n);
    
    for (i=1;i<=n;i++) 
     {
      scanf ("%d %d %d",&a[i],&b[i],&c[i]);
         
         v=max(a[i],max(b[i],c[i]));
         m=min(a[i],min(b[i],c[i]));     
         k=sr (a[i],b[i],c[i]);  
            
      while (v+k+m>1)
       {       
         
        if (v>0 && k>0)
           {
             v--;
             k--;
             m++;
           }
         v=max(v,max(m,k));
         m=min(v,min(m,k));     
         k=sr (v,m,k);
         
             if (v+m+k==1){printf ("Yes\n");l++;}
             if (m+k==0){v=0;}
        }
      
        if (v+m+k==1)printf ("Yes\n");
        if(l==0 && v+m+k!=1) printf ("No\n");   
        
        l=0;
     }
return 0;   
}
