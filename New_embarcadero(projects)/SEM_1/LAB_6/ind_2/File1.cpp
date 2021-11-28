#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

 int _tmain(int argc, _TCHAR* argv[])
 {    string slovo,okonchanie,symbol;
	  cout<<"Enter the last sumbol : " ;
	  cin>>okonchanie;
	  cout<<"Enter the nessesery symbol : ";
	  cin>>symbol;
   while (cin>>slovo)
   {



	  if (slovo.size() >= okonchanie.size())
		{ if (slovo.substr(slovo.size() - okonchanie.size()) == okonchanie)
			{ slovo.insert(slovo.size()  , symbol);
			   cout<<slovo<<" ";
			} else {cout<<slovo<<" ";}

		}




	}
   getch();	return 0;
 }















 /*
s.resize(n); указать размер строки
s.substr(l, k); взять подстроку начиная с позиции l длиной k
s.size(); размер строки, параметр всегда пустой
s.back(); возвращает последний символ, параметр всегда пустой
s.find("sample"); найти первой вхожденее заданной строки, если нету, вернет string::npos
s.insert(l, "sample"); вставить строку начиная с позиции l, l <= s.size();
s.erase(l, k); удалить подстроку начиная с позиции l длиной k

*/