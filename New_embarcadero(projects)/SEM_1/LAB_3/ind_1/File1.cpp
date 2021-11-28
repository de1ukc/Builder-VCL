#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

//#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{ float Y=0,S=0,x=0;
int f=0,N[20],n=0;


cout<<"kolichestvo chlenov ryada , n= ";
cin>>n;
cout<<"vvedite kolichestvo iksov - ";
cin>>f;



 N[0]=1;
 for (int i = 1; i <= 10; i++)
 { N[i]=N[i-1]*i;
 }
			for (int b = 0; b < f; b++)
			{
			  cout<<" viberite x ot 0.1 do 1 , x= ";
			  cin>>x;
			  S=0;
			   for (int c = 0; c <= f; c++)
			   {
				 S += (2*c+1)*pow(x,2*c)/N[c];

			   }

			   Y=(1+2*pow(x,2))*exp(x*x);
			   cout<<"S= "<<S<<"\t"<<"Y= "<<Y<<endl;


			 }
 getch();	return 0;
}



























/* if (x > 1 && x < 0.1) { cout<<"neverno vibran x"<<endl;

 } else { } */