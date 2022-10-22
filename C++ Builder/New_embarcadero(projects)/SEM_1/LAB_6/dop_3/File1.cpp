#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

long long factorial (int array_of_factorials [], int M );
void body ( string s);

 int cnt[255];
int _tmain(int argc, _TCHAR* argv[])
{  int array_of_factorials [20];
     cout<<"Enter the word : "<<endl;
	 string s;
	 while (1)
	 { int kolvo,y;
	   cin>>s;
	   int ans = factorial (array_of_factorials,s.size());

	   body(s);
	   for (int i = 0; i < 255; i++)
		  {  ans = ans/factorial( array_of_factorials, cnt[i]);

		  }
		  cout<<ans;
	 }

   getch();	return 0;
}
long long factorial (int array_of_factorials [], int M ){
 array_of_factorials[0]=1;
 for (int i = 1; i <= 20; i++)
	{array_of_factorials[i]=array_of_factorials[i-1]*i;


	}

 return array_of_factorials[M];
 }

 void body ( string s){
	   int n = s.size();
	   for (int i = 0; i < 255; i++)
		  { cnt[i] = 0;

		  }
	  for (int i = 0; i < n; i++)
		 { cnt[s[i]]++;

		 }



 }


