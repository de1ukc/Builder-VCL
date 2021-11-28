#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif


#include <conio.h>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

 //int rek_1 (int  arr[] , int N, int min, int x, int &b);
 //int rek_2 (int  arr[] , int N, int min, int y, int &c);


int _tmain(int argc, _TCHAR* argv[])
{       system ("chcp 1251>nul") ;
		HINSTANCE load;
		load=LoadLibrary(L "LibraryDLL1.dll");
		typedef double (__stdcall *pfsum)(int,int,int,int,int);
		pfsum rek_1,rek_2;
		rek_1=(pfsum)GetProcAddress(load,"rek_1");
		rek_2=(pfsum)GetProcAddress(load,"rek_2");
  srand(time(0));
  int b =0,c = 0;
  const int N = 10;
  int arr[N];
  int min=100000;
  int i = 0, j = 5;
  for (int i = 0; i < N; i++)
	 { arr[i]=rand() %100 +1;
	   cout<<arr[i]<<" ";
	 } cout<<endl;

	 if (rek_1( arr, N/2, min, i, b) >= rek_2 (arr,N, min, j, c ))
	   { cout<<"наименьший элемент массива под номером "<<c<<" равен "<<  rek_2 (arr,N, min, j, c );

	   }else cout<<"наименьший элемент массива под номером "<<b<<" равен "<<rek_1( arr, N/2, min, i, b);

 FreeLibrary(load); getch();	return 0;
}
