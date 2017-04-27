#include <iostream>
#include<math.h>
int nod(int x,int y)
{
    if (x!=0) return nod(y%x,x);
    else return y;
}
using namespace std;
main()
 {    
long long int a,b;
cin>>a>>b;
cout<<nod(a,b);
cout<<endl;
return 0;
}
