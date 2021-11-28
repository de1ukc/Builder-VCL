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




int _tmain(int argc, _TCHAR* argv[]) 
{            system ("chcp 1251>nul") ;
	int N,glavnaya = 0;
	cout<<"введите размер магического квадрата = ";
	cin>>N;
	int** arr = new int* [N];// массив указателей со строками
	for (int i = 0; i < N; i++)
	   { arr[i]= new int [N]; // колонки

	   }
	for (int i = 0; i < N; i++)
	   { for (int j = 0; j < N; j++)
			{ arr[i][j]=rand()%10 +1;
			  cout<<arr[i][j]<<"\t";
			}cout<<endl;

	   }



	   for (int i = 0; i < N; i++)         // сумма элементов главной диагонали
		  { for (int j = 0; j < N; j++)
			   { if (i == j)
				   { glavnaya += arr[i][j];

				   }



			   }

		  }cout<<glavnaya;


		  for (int i = 0; i < N ; i++)
			 { int sum = 0;
				for (int j = 0; j < N; j++)
				  { sum += arr[i][j];

				  }









			 }






//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
   for (int i = 0; i < N; i++)
	  { delete [] arr[i];

	  }
	  delete [] arr;

   getch();	return 0;
}
