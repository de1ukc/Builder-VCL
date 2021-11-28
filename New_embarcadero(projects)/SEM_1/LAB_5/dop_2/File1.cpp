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
using namespace std;
long long a[100][100];
int _tmain(int argc, _TCHAR* argv[]) 
{

long long n = 5, m = 10, k = 3;
a[0][0] = 1;
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++) if(a[i][j])
        {
            for(int z = 0; z < k; z++)
            {
                a[i + 1][j + z] += a[i][j];

            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
	}
   getch();	return 0;
}

/*
1
1 1 1
1 2 3 2 1
1 3 6 7 6 3 1
1 4 10 16 19 16 10 4 1
1 5 15 30 45 51 45 30 15 5 1

*/