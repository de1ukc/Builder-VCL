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
#include <File2.h>
#include <iostream>
  using namespace std;
int _tmain(int argc, _TCHAR* argv[]) 
{
      int i;
	cout << "select figure:\n1-kvadrat\n2-pryamougolnik\n3-treugolnik\n4-krug\n5-trapeciya\n0-vyhod\n";
    cin >> i;
    switch (i)
    {
	case 1 : cout << kvadrat(5.5);break;
    case 2 : cout << pryamougolnik(6.3,4);break;
    case 3 : cout << treugolnik(4.3,8.1);break;
	case 4 : cout << krug(5.9);break;
	case 5 : cout << trapeciya(9.4,2.1,5);break;
	default : ;
	}
	getch(); return 0;
}
