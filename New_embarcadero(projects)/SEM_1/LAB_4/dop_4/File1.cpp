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
#include <vector>
#include <algorithm>

using namespace std;




int _tmain(int argc, _TCHAR* argv[]) 
{              system ("chcp 1251>nul") ;
  int n,m;
  cout<<" ������� m*n "<<endl;
  cout<<"n = ";
  cin>>n;
  cout<<"m = ";
  cin>>m;
  srand(time(0));

  int arr [n][m];
  for (int i = 0; i < n; i++)
	 { for (int j = 0; j < n; j++)
		  { arr[i][j] = rand()%100 + 1;
		  cout<<arr[i][j]<<" \t";

		  }cout<<endl;

	 }cout<<endl;

	  vector<int> vector;

	 for (int i = 0; i < n; i++)
		{ for (int j = 0; j < m; j++)
			 {
				 { vector.push_back(arr[i][j]);

				 }

			 }

		}
	sort(vector.begin(),vector.end());
	int step = 0 ;
	for (int i = 0; i < n; i++)
	   { for (int j = 0; j < m; j++)
			{ if (j <= n-i-1)
				{ arr[i][j] = vector[step++];
				}
			}

	   }
	   for (int i = 0; i < n; i++)
		  { for (int j = 0; j < m; j++)
			   { cout<< arr[i][j]<<"\t";

			   }cout<<endl;

		  }



















	getch(); return 0;
}
