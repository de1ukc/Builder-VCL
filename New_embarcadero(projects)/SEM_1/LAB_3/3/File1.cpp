#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
using namespace std;
#include <iostream>
#include <conio.h>
#include <math.h>
int _tmain()
{
float k,H,y,x,A=0,B=M_PI/2;
int M=20,i;


	for (i = 0; x>=A && x<=B ; i++) {
	x=A+i*H;
	H=(B-A)/M;
	y=sin(x)+cos(x);

	cout<<"x="<<x << "\t" << "y= "<<y<<endl;

	}
	getch();
	return 0;
}
