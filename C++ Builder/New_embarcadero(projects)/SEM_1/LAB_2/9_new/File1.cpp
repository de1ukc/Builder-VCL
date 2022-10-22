#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
using namespace std;

int main()
{

float a, b, c, x1, x2, x3, x4, t1, t2, D;
cout << "ax^4+bx^2+c=0" << endl;
cout << "a=";
cin >> a;
cout << "b=";
cin >> b;
cout << "c=";
cin >> c;
// пусть x^2=t // получим уравнение вида at^2+bt+c=0
D =b*b - 4 * a * c;
if (D>0) { if (a != 0) { if (t1>=0) { t1=(-b+ sqrt(D))/2*a; t2=(-b-sqrt(D))/2*a;
							  cout<<"t1="<<t1<<endl;
							  cout<<"t2="<<t2<<endl;
							  x1=sqrt(t1);x2=-sqrt(t1);
							  x3=sqrt(t2);x4=-sqrt(t2);
							  cout<<"x1="<<x1<<endl;
							  cout<<"x2="<<x2<<endl;
							  cout<<"x3="<<x3<<endl;
							  cout<<"x4="<<x4<<endl;

						 } else {cout<<"t<0 , korney net"; }

		   } else /*b*x*x+c=0 */ if (b!=0 && c>=0 ) { x1=sqrt(-c/b);
													  x2=-sqrt(-c/b);
													  cout<<"x1="<<x1<<endl;
													  cout<<"x2="<<x2<<endl;

								 } else cout<<"corney net";

} else  { cout<<"Korney net D<0";}
getch(); return 0; }
