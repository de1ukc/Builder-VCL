int** DinamicArray (int N, int M) {


   int **arr = new int*[N]; // создание массива указателей
   for (int i = 0; i < N  ; i++) /*строки*/  //создание массивов одномерныХ, на которые указывают указатели
	  { arr[i] = new int [M]; /*колонки*/

	  }
	

   return arr;
}
   int* get_1 ( int n)
 { int* b = new int [n];

   return b;
 }

 int* get_2 ( int n)
 { int* c = new int [n];

	return c;
 }
