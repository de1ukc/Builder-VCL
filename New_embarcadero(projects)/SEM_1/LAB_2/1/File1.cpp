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
{ int x,y;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
if ( x>y) { y=0; cout<<"y=0"<<endl;


} else if (x<y) {  x=0; cout<<"x=0"<<endl;

	   } else if (x==y) {  x=y=0; cout<<"x=y=0"<<endl;

			  }


 float a,b,c;
 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;
 cout<<"c=";
 cin>>c;
 if (a>b && a>c) { a=a-0.3; cout<<"a="<<a;


 } else if (b>a && b>c) { b=b-0.3;cout<<"b="<<b;

		} else if (c>a && c>b) { c=c-0.3; cout<<"c="<<c;

			   }  else cout<<"chisla ravni";

 getch();	return 0;
}
