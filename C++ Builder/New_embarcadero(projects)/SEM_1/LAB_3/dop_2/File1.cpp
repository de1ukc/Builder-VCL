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
{  system ("chcp 1251>nul") ;
int i=1 ,a ;
float sum=0;
 cout<<" ������� ����� � = ";
 cin>>a;
 for (i; i < a; i++)
   { if (a%i == 0)
	 { cout<< " ������ ����� �������� ���������� �����  "<<a<<" - "<<i<<endl;
	   sum +=i;
	 }

   }cout<<" sum="<<sum<<endl;
	if (a == sum)
	  { cout<<" ����� "<<a<<" �������� ������������";;

	  } else {cout<<" ����� "<<a<<" �� �������� ������������";}

	getch(); return 0;
}
