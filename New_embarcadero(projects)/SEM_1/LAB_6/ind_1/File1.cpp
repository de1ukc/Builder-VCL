#include <iostream>
#include <stdio.h>
#include <conio.h>
//#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{ char arr[] = {};
  cin>>arr;
   for (int i = 0; i < strlen(arr); i++)
	  {  if (arr[i] != '0' && arr[i] != '1')
		   { exit(1); }

	  }
   if (strlen(arr) % 2 == 1)
	 { int counter = 0;
	  for (int i = 0; i < strlen(arr); i++)
		 { if (arr[i] == '1')
			 { counter++;

			 }

		 } cout<<" number of 1 = "<<counter;

	 }   else { cout<<" vvedeno chetnoe kol-vo zifer";  }

	 getch();	return 0;
}
