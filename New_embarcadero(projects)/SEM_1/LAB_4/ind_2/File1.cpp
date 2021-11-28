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
{  system ("chcp 1251>nul") ;
 int const N=3,M=3;
 int arr[N][M],sum=0;
 cout<<"размер массива 3*3 "<<endl;
 //int i = 0;
 //int j = 0;
 //srand(time(0));
  for ( int i = 0; i < N; i++)
	  {
	  for ( int j = 0; j < M; j++)
		   {
		   arr[i][j]=rand()%100;

			cout<<arr[i][j]<<"\t";
		   }  cout<<endl;

	  }

   for ( int i = 0; i < N; i++)
	  {  for (int  j = 0; j < M; j++)
			{ if (i == j)
				{ sum += arr[i][j];

				}

			}

	  }
	  cout<<"сумма элементов главной диагонали = "<<sum<<endl;
	  int proisv=1;
	  for (int i = 0, j = 2; i < N; i++,j--)
	  {  for (  j ; j >= 0 ;)
		 { proisv *= arr[i][j];
		   break;


		 }
	  }
	  cout<<"произведение элементов побочной диагонали = "<<proisv<<endl;




																				 /*for (int i = 0; i < N; i++)
																					{ for (int j = 0; i < M; j++)
																					 { cout<<arr[i][j]<<"\t";

																						 }cout<<endl;

																							}*/








  getch();	return 0;
}
