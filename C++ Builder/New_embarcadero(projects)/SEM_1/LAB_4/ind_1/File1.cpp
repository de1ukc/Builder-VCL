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

using namespace std;




int _tmain(int argc, _TCHAR* argv[]) 
{    system ("chcp 1251>nul") ;


	const int size=5;
	cout<<" size = "<<size<<endl;         // для статического массива нужно брать константу
	 int  arr[size];

	 for (int i = 0; i < size; i++)
	   { cout<<"введите элемент массива = ";
		 cin>>arr[i];
	   }
	   for (int i = 0; i < size; i++)
		 {  int f=0;
		  for (int j = 0; j < size; j++)
			 { if (arr[i] != arr[j])
			   { f++;

			   }
			   if (f == 0) { cout<<"неповторяющаяся переменная :"<<arr[i]<<endl;

			   }
			 }



		 }




   getch();	return 0;
}


