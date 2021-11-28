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
#include <math.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{  float E=0.001,d,D=0;
int n=0;
do {d=pow((1./2),n) +pow((1./3),n);

	cout<<"n= "<<n<<endl;
	cout<<"d="<<d<<endl;
	D=D+d;
	n++;}
while(d>E);
cout<<"D - summa ryada ="<<D;
   getch();	return 0;
}
