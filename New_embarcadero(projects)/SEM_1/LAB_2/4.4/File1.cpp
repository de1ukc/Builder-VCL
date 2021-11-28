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
{ float x1,x2,m,k,c,s,L;
cout<<"x1=";
cin>>x1;
cout<<"x2=";
cin>>x2;
cout<<"m=";
cin>>m;
c=pow(cos(x1*x1),3);
s=pow(sin(x2*x2*x2),3);
k=c+s;
cout<<"k="<<k<<endl;
if (k<1) { L=pow(k,3)+pow(m,3./10);
cout<<"k<1 , then L="<<L;

} else if (k>=1) { L=k*k - exp(m);
		 cout<<"k>=1, then L="<<L;
	   }
	getch(); return 0;
}
