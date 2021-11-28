

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

int _tmain(int argc, _TCHAR* argv[])
{   HINSTANCE load;
load= LoadLibrary(L "MyLibDLL.dll");
 typedef double ( __stdcall *pfsum)(double,double);
 pfsum f1,f3;
 typedef double ( __stdcall *pfsum1)(double, double),double);
 pfsum1 f2;



 f1=(pfsum)GetProcAdress(load,"f1");
 f2=(pfsum1)GetProcAdress(load,"f2");
 f3=(pfsum)GetProcAdress(load,"f3");


 double m,n,k;
 cin>>m>>n>>k;
 if (m>n)
   { cout<<f1(n,m)

   } else if (m == n)
			{ cout<<f2(n,m,k);

			}else {cout<<f3(n,m)}
  FreeLibrary(load);
   getch();	return 0;
}
