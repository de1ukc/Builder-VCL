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
s.resize(n); ������� ������ ������
s.substr(l, k); ����� ��������� ������� � ������� l ������ k
s.size(); ������ ������, �������� ������ ������
s.back(); ���������� ��������� ������, �������� ������ ������
s.find("sample"); ����� ������ ��������� �������� ������, ���� ����, ������ string::npos
s.insert(l, "sample"); �������� ������ ������� � ������� l, l <= s.size();
s.erase(l, k); ������� ��������� ������� � ������� l ������ k

*/