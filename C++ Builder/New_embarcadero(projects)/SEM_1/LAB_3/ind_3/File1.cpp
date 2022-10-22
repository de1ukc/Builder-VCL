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
{          system ("chcp 1251>nul") ;
		 int a=1,b=4;
		 float h=1,y;
		 cout<<"отрезок значений [1;4]"<<endl;
		 cout<<"шаг перебора , h = "<<h<<endl;
		 cout<<" x : "<<"\t"<<" y : "<<endl;
		 for (int x = 1 ; x >= 1 && x <= 4; x += h)
		 { y= (exp(1+x))*sinh(x);
		  cout<<x<<"\t"<<y<<endl;


		  }
		 getch();	return 0;
}
