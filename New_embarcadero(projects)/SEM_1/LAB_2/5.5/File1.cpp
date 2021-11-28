#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{ float a,b,c,d,Z;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
cout<<"d=";
cin>>d;
if (c>=d && a<d) { Z=a+b/c ;cout<<"Z="<<Z;

} else if (c<d && a>=d) { Z=a-b/c; cout<<"Z="<<Z;

	   } else {Z=0; cout<<"Z="<<Z;}
  getch();	return 0;
}

