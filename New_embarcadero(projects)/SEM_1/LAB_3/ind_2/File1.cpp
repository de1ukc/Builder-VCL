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
#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{     float arg=0,min=1000,shag=0,b=1,a=-1,y ;
	  int n;
	  cout<<"na skol'ko chastey razdelit' oblast' poiska, n= ";
	  cin>>n;
	  shag=(b-a)/n;
	  cout<<"shag perebora = "<<shag<<endl;
	  for (float i = -1;i>=-1 && i <=1 ; i += shag)
		 {
		  y= cosh(i*i)- acos(i);
		  if (fabs(y)< min)
		  {
			 min=fabs(y);
			 arg=i;

		   }


	   }cout<<" koren' uravnenia raven = "<< arg;

	  getch();	return 0;
}
