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
{ float a,b,c,x,y,s1,s2,s3,s0;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
s0=x*y;
s1=a*b;
s2=b*c;
s3=a*c;
cout<<"ploshad' otverstia ="<<s0<<endl;
cout<<"ploshad' pervaya grani ="<<s1<<endl;
cout<<"ploshad' vtotoi grani ="<<s2<<endl;
cout<<"ploshad' tretey grani ="<<s3<<endl;
if (s1<=s0) { cout<<"kirpich prohodit";

}else if (s2<=s0) {cout<<"kirpich prohodit";

	  }else if (s3<s0) {cout<<"kirpich prohodit";

			} else { cout<<"kirpich ne prohodit";}


  getch();	return 0;

}  ;
