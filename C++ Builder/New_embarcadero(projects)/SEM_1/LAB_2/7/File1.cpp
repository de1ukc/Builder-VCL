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
if (D >= 0)
{  if (a != 0) { t1 = (-b + sqrt(D)) /(2 * a);// ДЕЛЕНИЕ НА 0, ПРИ А =0
				 t2 = (-b - sqrt(D)) /(2 * a);

   } else {cout <<"D<0 korney net";}
cout<<"t1="<<t1<<endl;
cout<<"t2="<<t2<<endl;
 if (t1 >= 0) { if (t1 > 0) {  x1 = sqrt(t1);
							   x2 = -sqrt(t1);
							   cout << "x1=" << x1 << endl;
							   cout << "x2=" << x2 << endl;

				}

 }else { cout<< "x1=x2=0"<<endl;}
 }
 if (t2 >= 0) { if (t2 > 0) {  x3 = sqrt(t2);
							   x4 = -sqrt(t2);
							   cout << "x3=" << x3 << endl;
							   cout << "x4=" << x4 << endl;

				}

 } else {cout<<"x3=x4=0"<<endl;}


















/*else {
x1 = sqrt(-(c / b));
x2 = -sqrt(-(c / b));
cout << "x1=" << x1;
cout << "x2=" << x2 ;
}
}
else
{
cout << "D<0, net korney";
}
*/
 getch(); return(0);
}
