#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <funk.h>
using namespace std;

  /* int** DinamicArray (int N, int M);
   int* get_1 ( int n);
   int* get_2 ( int n); */



int _tmain(int argc, _TCHAR* argv[])
{        system ("chcp 1251>nul") ;
   int N,M,n;
   cout<<"������ ������� N*M"<<endl;
   cout<<"N = ";
   cin>>N;
   cout<<"M = ";
   cin>>M;
   cout<<"������� ������ ���������� ������������ ��������, n = ";
   cin>>n;
   int** barray;
   barray = DinamicArray ( N,  M);
   int *X;
   X = get_1 (n);
   int *Y;
   Y= get_2 (n);
	  cout<<"������� �������� ������� ������� : "<<endl;
	  for (int i = 0; i < n; i++)
		 {cin>>X[i];

		 }cout<<endl;
	  cout<<"������� �������� ������� ������� : "<<endl;
	  for (int i = 0; i < n; i++)
		 {cin>>Y[i];

		 }

	  for (int i = 0; i < N; i++)
		 { for (int j = 0;  j< M; j++)
			  { barray[i][j]= X[i]*Y[j];
				cout<<barray[i][j]<<"\t";
			  }cout<<endl;

		 }

  getch();	return 0;
}


