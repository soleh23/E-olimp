 #include<iostream>
 #include<math.h>
 using namespace std;
 main()
 {
__int64 a,c=0,b=3,d=0;
cin>>a;
c=a+1;
for (int i=c;i>=1;i-=2)
{
d+=i;
}
cout<<(d*2)+1+(a*2);
return 0;
}
