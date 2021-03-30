//---------------------------------------------------------------------------

#ifndef ListH
#define ListH
//---------------------------------------------------------------------------

class Train
{
public:
	Train(){
		//srand(time(NULL));
		for (int i = 0 ; i < 7; i++)
			{
			this->seats[i] = rand()%5 + 1;
			}

	 }
	String name;
	String destination;
	String time;
	int seats[7];
	String day[7];

};


template<typename Class>
class List
{
public:
	List()
	{
		Size = 0;
		head = nullptr;
	}

	Class& operator[](const int index)
	{
		int counter = 0;
		MyClass<Class> *cur = this->head;
		while (cur != nullptr)
		{
			if (counter == index )
			{
				return cur->value;
			}
			cur = cur->pNext;
			counter++;
		}
	}

	void push_back(Class a)
	{
		if (head == nullptr)
		{
			head = new MyClass<Class>(a);
		}
		else
		{
			MyClass<Class> *cur = this->head;
			while (cur->pNext != nullptr)
			{
				cur = cur->pNext;
			}
			cur->pNext = new MyClass<Class>(a);
		}
		Size++;
	}

	int GetSize()
	{
		return Size;
	}

	void pop_front()  // удаление ПЕРВОГО элемента списка
	{
		MyClass<Class> *temp = head;
		head = head->pNext;
		delete temp;
		Size--;
	}

	void Clear()
	{
		while (Size)
		{
			pop_front();
		}
	}


	void push_front(Class a)
	{
		head = new MyClass<Class>(a,head);
		Size++;
	}

	void insert(Class a, int index ) // вставить данные по индексу
	{
		if (index == 0)
		{
			push_front(a);
		}
		else
		{
			MyClass<Class> *previus = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				previus = previus->pNext;
			}
			MyClass<Class> *newDay = new MyClass<Class>(a,previus->pNext);
			previus->pNext = newDay;
			Size++;
		}
	}

	void removeAT(int index )
	{
		if (index == 0)
		{
			pop_front();
		}
		else
		{
			MyClass<Class> *previus = this->head;
			for(int i = 0 ; i < index -1; i++)
			{
				previus = previus->pNext;
			}
			MyClass<Class> *toDelete = previus->pNext;
			previus->pNext = toDelete->pNext;
			delete toDelete;
			Size--;
		}
	}

	void pop_back(int index )
	{
		if (index == 0)
		{
			removeAT(0);
		}
		else
		{
			removeAT(Size - 1);
		}
	}

   /*	~List()
	{
		Clear();
	}
    */


private:
	template<typename Classssssss>
	class MyClass
	{
		public:
		Class value;
		MyClass *pNext;
		MyClass(Class a = Class(), MyClass *pNext = nullptr )
		{
			this->value = a;
		}

	};
	MyClass<Class> *head;
	int Size;
};

#endif
