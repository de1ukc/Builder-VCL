#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
  long long f(long long n);
int _tmain(int argc, _TCHAR* argv[]) 
{
long long n;
	while(cin>>n)
	{
	  cout<<f(n)<<"\n";
	}


   getch();	return 0;
}




long long f(long long n)
{
    if(n == 0) return 0;
	long long kol = (n + 1) / 2;
	return kol * kol + f(n / 2); // сумма первых нечётных равна квадрату их кол-ва
}


/*

1 2 3 4 5 6 7                          // 1 + 3 + 5 + 7 = 16 0
  2   4   6                            // 1 + 3 = 4          1
	  4                                // 1 = 1              2



	  1 2 3 4 5 6 7 8 9 10 // 1 + 3 + 5 + 7 + 9= 25
		2   4   6   8   10 // 1+3+5=9
					8      // 1
                           // 1
*/