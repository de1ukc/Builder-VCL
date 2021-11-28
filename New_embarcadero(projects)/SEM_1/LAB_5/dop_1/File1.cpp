#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
 long long sum(long long n);
int _tmain(int argc, _TCHAR* argv[]) 
{
	while(1)
	{
		long long x,y;
		cin>>x>>y;
		if(x == -1 && y == -1) break;
//        ll ans = 0;
//        for(int i = x; i <= y; i++){
////            cout<<i<<" ans + "<<F(i)<<"\n";
//            ans += F(i);
//        }
		cout<<sum(y) - (x == 0 ? 0 : sum(x - 1))<<"\n";
	}



  getch();	return 0;
}
long long sum(long long n)
{
	if(n == 0) return 0;
	long long k = n / 10;
	long long ans = k * 45 + sum(k);
	ans += (n % 10) * (n % 10 + 1) / 2;
	return ans;
}




//ll F(ll n)
//{
//    if(n % 10 > 0) return n % 10;
//    if(n == 0) return 0;
//    return F(n / 10);
//}




/*
1 R
L R

139
1000000000

+ 1
+ 2
+ 3


+ 1
*/