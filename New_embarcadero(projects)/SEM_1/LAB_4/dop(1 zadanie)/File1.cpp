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
   int N,M;
   cout<<"������� ������ ������� N*M :  "<<endl;
   cout<<"N = ";
   cin>>N;
   cout<<"M = ";
   cin>>M;
   //srand(time (0));
   int **arr = new int*[N]; // �������� ������� ����������
   for (int i = 0; i < N; i++) /*������*/  //�������� �������� ����������, �� ������� ��������� ���������
	  { arr[i] = new int [M];    /*�������*/

	  }


   for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   { arr[i][j]=rand()%10 +1;

		   }

	  }




	  for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   {cout<<arr[i][j]<<"\t";

		   }cout<<endl;

	  }cout<<endl;







   /////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////



   int **mass = new int*[N]; // �������� ������� ����������
   for (int i = 0; i < N; i++)/*������*/   //�������� �������� ����������, �� ������� ��������� ���������
	  { mass[i] = new int [M]; /*�������*/

	  }


   for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   { mass[i][j]=rand()%10 +1;

		   }

	  }




	  for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   {cout<<mass[i][j]<<"\t";

		   }cout<<endl;

	  }cout<<endl;





   //////////////////////////////////////////////////////////////////////////
   //////////////////////////////////////////////////////////////////////////

   int **bad= new int* [N];
   for (int i = 0; i < N; i++)
	  {  bad[i]= new int [M];

	  }
	  /*for (int i = 0; i < N; i++)
		 {


		 }*/
		 for (int j = 0; j < M; j++)
			{ int p=1;
				  for (int i = 0; i < N; i++)
					 { p *= mass[j][i];

					 }
					 for (int i = 0; i < N; i++)
						{  bad[i][j]= arr[i][j] + p;


						}






			}
			for (int i = 0; i < N; i++)
			   { for (int j = 0; j < M; j++)
					{ cout<<bad[i][j]<<"\t";

					}cout<<endl;

			   }



        /*for (int a = 0; a < N; a++)
				   { int s=1;
					  for (int b = 0; b < M; b++)
						 { s *= mass[a][b];

						 }
					   for (int i = 0; i < N; i++)
						  {

						  }cout<<endl;
				   }*/






        for (int i = 0; i < N /*������*/; i++)
	   {
		 delete [] arr[i]; /* ������� ���������� ������� , �� ������� ��������� ���������*/
	   }


   delete [] arr; /* ������� ������ �����������*/







   for (int i = 0; i < N /*������*/; i++)
	   {
		 delete [] mass[i]; /* ������� ���������� ������� , �� ������� ��������� ���������*/
	   }


   delete [] mass; /* ������� ������ �����������*/



  getch();	return 0;
}
