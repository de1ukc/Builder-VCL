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
{ float x,z,y,a,c,s,b;
int f;
cout<<"a=";
cin>> a;
cout<<"z=";
cin>>z;
cout<<"b=";
cin>>b;
 cout<<"viberite vashu fukkziu : 1=2*x,2=x*x,3=x/3, f=";
cin>>f;
 c= pow (cos(x*x),3); cout<<"cos^3="<<c<<endl;
s= pow(sin(x*x*x),2); cout<<"sin^2="<<s<<endl;
if (z<1) { x=z*z*z+0.2;

} else if (z>=1) {x=log(z);
		cout<<"log ot z = "<<x<<endl;
	   }





switch (f) {
case 1 : y=(2*a*c)+s-(b*2*x), cout<<"f=2*x, y="<<y;break;
case 2 : y=(2*a*c)+s-(b*x*x), cout<<"y="<<y;break;
case 3 : y=(2*a*c)+s-(b*x/3), cout<<"y="<<y;break;

default: cout<<"neverny vvod";

}
 getch();	return 0;
}
