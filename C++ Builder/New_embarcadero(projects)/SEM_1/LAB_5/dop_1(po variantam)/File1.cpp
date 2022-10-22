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
{              system ("chcp 1251>nul") ;
    //srand(time(0));
   int N,M;
   cout<<"введите размер массива N*M :  "<<endl;
   cout<<"N = ";
   cin>>N;
   cout<<"M = ";
   cin>>M;
   float **arr = new float*[N]; // создание массива указателей
   for (int i = 0; i < N; i++)  /*строки*/ //создание массивов одномерныХ, на которые указывают указатели
	  { arr[i] = new float [M]; /*колонки*/

	  }


   for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   { arr[i][j]=rand()%11 ;

		   }

	  }




	  for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   {cout<<arr[i][j]<<"\t";

		   }cout<<endl;

	  }cout<<endl;
		int counter=0;
       for (int i = 0; i < N; i++)
		 { for (int j = 0; j < M; j++)
			  { if (arr[i][j] == 0)
				  { counter++;

				  }


			  }

		 }
	   cout<<"Количество нулевых элементов - "<<counter<<endl;
	  cout<<"индексы нулевых элементов : "<<endl;
	  for (int i = 0; i < N; i++)
		 { for (int j = 0; j < M; j++)
			  { if (arr[i][j] == 0)
				  { cout<<"("<<i<<","<<j<<")"<<endl;

				  }


			  }

		 }
		 cout<<endl;

		 for (int i = N-1; i >= 0; i--)
			{ for (int j  = M-1; j >= 0; j--)
				 {cout<<arr[i][j]<<"\t";

				 }cout<<endl;

			}








	for (int i = 0; i < N ; i++) /*строки*/
	   {
		 delete [] arr[i]; /* удаляем одномерные массивы , на которые указывают указатели*/
	   }


   delete [] arr; /* удаляем массив иуказателей*/





  getch();	return 0;
}
