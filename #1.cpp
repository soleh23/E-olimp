#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#include<vector>
#define LL long long int
using namespace std;
double sum = 0;
main()
 {
     freopen ("input.txt","r",stdin);
     freopen ("output.txt","w",stdout);

     for (int i = 1; i <= 10; i++){
         sum += (sin(5*i) * sin(5*i)) / (i*i*i*i);
     }

     printf ("%lf", sum);

 return 0;
 }
