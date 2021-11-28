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
#include <conio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{ int G,now,old,f;
cout<<"God rojdenia - ";
cin>>G;
cout<<"tekushiy god - ";
cin>>now;
old=now-G;
cout<<"vozrast="<<old<<endl;
cout<<"esly vosrast okanchivaetsy na 1 vvedy 1, ot 2 do 4 - 2, ot 5-10 - 3 f=";
cin>>f;
switch (f ) {
case 1 : cout<<"Vozrast cheloveka ="<<old<<" god"; break;
case 2 : cout<<"Vozrast cheloveka ="<<old<<" goda"; break;
case 3 : cout<<"Vozrast cheloveka ="<<old<<" let";break;    // зауснуть сюда проверку возраста с помощью if

default:
    ;
}

 getch();	return 0;
}
