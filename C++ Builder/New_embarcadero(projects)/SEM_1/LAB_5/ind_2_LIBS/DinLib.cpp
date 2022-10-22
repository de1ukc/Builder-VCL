//   Important note about DLL memory management when your DLL uses the
//   static version of the RunTime Library:
//
//   If your DLL exports any functions that pass String objects (or structs/
//   classes containing nested Strings) as parameter or function results,
//   you will need to add the library MEMMGR.LIB to both the DLL project and
//   any other projects that use the DLL.  You will also need to use MEMMGR.LIB
//   if any other projects which use the DLL will be performing new or delete
//   operations on any non-TObject-derived classes which are exported from the
//   DLL. Adding MEMMGR.LIB to your project will change the DLL and its calling
//   EXE's to use the BORLNDMM.DLL as their memory manager.  In these cases,
//   the file BORLNDMM.DLL should be deployed along with your DLL.
//
//   To avoid using BORLNDMM.DLL, pass string information using "char *" or
//   ShortString parameters.
//
//   If your DLL uses the dynamic version of the RTL, you do not need to
//   explicitly add MEMMGR.LIB as this will be done implicitly for you

#pragma hdrstop
#pragma argsused

extern "C" int _libmain(unsigned long reason)
{
	return 1;
}

extern "C" double __declspec(dllexport) __stdcall rek_1 (int  arr[] , int N, int min, int x, int &b)
 { if (N == 0)
	 { return min;

	 } else if (arr[x] <= min )
			  { min = arr[x++];
				b=x;
			   return rek_1 ( arr,--N,min,x,b);

			  } else return rek_1 ( arr,--N,min, ++x,b);


 }

 extern "C" double __declspec(dllexport) __stdcall rek_2 (int  arr[] , int N, int min, int y, int &c)
 { if (N == 5)
	 { return min;

	 } else if (arr[y] <= min )
			  { min = arr[y++];
				c=y;
			   return rek_2 ( arr,--N,min,y,c);

			  } else return rek_2 ( arr,--N,min, ++y,c);


 }

