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
#include <File2.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{ int n;
	cout << "Enter n:";
    cin >> n;
    double* arr = new double [n];
    for (int i = 1 ; i <= n; i++)
    {
        if (i <= 17)
        {
        arr[i] = 1/tan(i*i);
        }
        else
        {
        arr[i] = sin(i);
        }
    }
    double m = mathwaiting(arr, n);
    double d = dispertion(arr, n, m);
	cout << m << endl;
	cout << d << endl;
  getch();	return 0;
}
