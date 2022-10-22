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
#include <math.h>
#include <stdio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{    system ("chcp 1251>nul") ;
	 int x;
	 float c;
	 for (int a = 1; a <=9 ; a++)
	 {   for (int  b = 0; b < 9; b++)

		 {  if ((2*a+2*b) == a*b)

			{ x=10*a+b;
			cout<<" Данное  число - "<<x<<endl;

			}
		 }
	 }














	 getch();	return 0;
}
