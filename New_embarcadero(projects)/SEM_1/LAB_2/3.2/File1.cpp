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
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{ float x,y,s;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
if (x>y) { s= pow(fabs(x-y),1/.3)+ tan(x);

		   cout<<"x>y, then s="<<s;


} else if (x<y) { s=pow((y-x),3)+cos(x);
                  cout<<"x<y, then s="<<s;

	   } else {s=pow((y+x),2)+x*x*x;
	   cout<<"v ostalnih sluchayah s="<<s;}

   getch();	return 0;
}
