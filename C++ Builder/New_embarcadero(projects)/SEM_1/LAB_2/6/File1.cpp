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
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{  int N;
float a,b,c,Y;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
cout<<"viberite N: 2,3,7,56 N=";
cin>>N;
switch (N) {
 case 2 : Y=b*c-a*a; cout<<"N=2, Y="<<Y; break;
 case 3 : Y=a-b*c; cout<<"N=3 ,Y="<<Y; break;
 case 7 : Y=a*a+c; cout<<"N=7, Y="<<Y; break;
 case 56 : Y=b*c; cout<<"N=56, Y="<<Y; break;

  default: Y=pow((a+b),3); cout<<"Y="<<Y;
	;
}
 getch();	return 0;
}
		  //default: Y=pow((a+b),3); cout<<"Y=";
