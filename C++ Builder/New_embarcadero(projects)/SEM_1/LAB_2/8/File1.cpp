#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{ int n,k,a;
	cout<<"n<20 vvedite n, n=";
	cin>>n;
	cout<<"k<80, vvedite k, k=";
	cin>>k;
	n=n+k;
	if (n%10==1) {
		a=1;}
		else if (n%10>1 && n%10<5) {
			 a=2;}  else   if ((n%10>4 && n%10<10) || n%10==0){
				  a=3;}
				  else {a=4;}
				   if (n>4 && n<21) {  a=3;}
	switch(a)
	{
	 case 1: cout<<n<<" rybl'"; break;
	 case 2: cout<<n<<" ryblaya"; break;
	 case 3: cout<<n<<" ryblei"; break;
	 default : cout<<"wrong input"; break;




}  getch();	return 0;
}

