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
{  float x,y,z;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
cout<<"z=";
cin>>z;
if (x<=y+z) { if (y<=x+z) { if (z<=x+y) { cout<<"Takoi treugolnik sushestvuet";

							} else cout<<"treugolnika ne sushestvuet";

			 } else cout<<"treugolnika ne sushestvuet";

}else cout<<"treugolnika ne sushestvuet";
getch();
	return 0;
}
