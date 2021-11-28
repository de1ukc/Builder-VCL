#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <squares.h>
#include <conio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{ float i;
cout<<"storona kvadrata = ";
cin>>i;
 cout<<kvadrat(i);

  getch();	return 0;
}
