#include <iostream>
#include<math.h>
using namespace std;
main()
 {
 // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    
    
    int a[101],n,i;
    cin>>n;
    for (i=0;i<n;i++)
    {
    cin>>a[i];
    }
   for(i=n-1;i>=1;i--)
    {
    cout<<a[i]<<" ";
    }
    cout<<a[0];
    cout<<endl;
    return 0;
    }
