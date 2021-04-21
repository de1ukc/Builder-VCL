//---------------------------------------------------------------------------

#ifndef DequeH
#define DequeH
#include "Form.h"
//---------------------------------------------------------------------------
template<typename U>
class Node{
public:
Node(){}
U value;
Node *Next, *Prev;
};

template<typename T>
class Deque{
private:
Node<T> *Head, * Tail;
int Size;
public:
    Deque(){
    Size = 0;
    Head = Tail = nullptr;
    }

    void push_back(T data){
        Node<T> *cur = new Node<T>();
        if (Size == 0)
            {
                Head = Tail = cur;
                cur->value  = data;
                cur->Next   = nullptr;
                cur->Prev   = nullptr;
                Size++;
            }
            else
                {
                    Tail->Prev = cur;
                    cur->Next  = Tail;
                    Tail       = cur;
                    cur->value = data;
                    cur->Prev  = nullptr;
                    Size++;
                }
    }

    void push_front(T data){
        Node<T> *cur = new Node<T>();
        if (Size == 0)
            {
                Head = Tail = cur;
                cur->value  = data;
                cur->Next   = nullptr;
                cur->Prev   = nullptr;
                Size++;
            }
        else
            {
              Head->Next = cur;
              cur->Prev  = Head;
              Head       = cur;
              cur->Next  = nullptr;
              cur->value = data;
              Size++;
            }
	}

            bool isEmpty(){
                if (Size == 0) return true;
                         else return false;
            }

            int getSize(){
            return Size;
            }

            void pop_back(){
            if (isEmpty() == false)
                {
                    if (Size == 1)
                        {
                            Head = nullptr;
                            Tail = nullptr;
                            delete Tail;
                            Size--;
                        }
                    else
                        {
                            Node<T> *cur = Tail->Next;
                            cur->Prev = nullptr;
                            delete Tail;
                            Tail = cur;
                            Size--;
                        }
                }
                    else
                        {
						  ShowMessage("Очередь пуста ");

                        }
            }

            void pop_front(){
            if (isEmpty() == false )
                {
                    if (Size == 1)
                        {
                            Head = nullptr;
                            Tail = nullptr;
                            delete Head;
                            Size--;
                        }
                    else
                        {
                           Node<T> *cur = Head->Prev;
                           cur->Next    = nullptr;
                           delete Head;
                           Head = cur;
                            Size--;
                        }
                }
            else
                {
					ShowMessage("Очередь пуста");
				}


            }

            T& back(){
                if (Size != 0 )
            return Tail->value;
            else exit(1);
            }

            T& top(){
                if (Size != 0 )
            return Head->value;
            else exit(1);
            }

            /*
            Node<T> back_extract(){
                if (isEmpty() == false )
                    {
                        Node<T> ans;
                        ans.value = Tail->value;
                        ans.Next  = Tail->Next;
                        ans.Prev  = Tail->Prev;
                        Deque::pop_back();
                        return ans;
                    }
                else
                    {

                        cout<<"Dec is back empty"<<endl;
                    }

            }

            Node<T> top_extract(){
                 if (isEmpty() == false )
                     {
                        Node<T> ans;
                        ans.value = Head->value;
                        ans.Next  = Head->Next;
                        ans.Prev  = Head->Prev;
                        Deque::pop_front();
                        return ans;
                     }
                 else
                     {
                        cout<<"Dec is pop empty"<<endl;

                     }

            }
            */

            T back_extract(){
                if (isEmpty() == false )
                    {
                        T ans = Tail->value;
                        Deque::pop_back();
                        return ans;
                    }
                else
                    {
					   ShowMessage("Очередь пуста, сзади ничего достать нельзя");
					}


			}

			T top_extract(){
				if (isEmpty() == false )
					{
						T ans = Head->value;
						Deque::pop_front();
						return ans;
					}
				else
					{
						ShowMessage("Очередь пуста, спереди ничего достать нельзя");
					}
			}

			void DeleteAll(){
			while( !isEmpty())
			{
				pop_front();
			}
            }

            ~Deque(){
            DeleteAll();
			}

			void Sort(){
			Node<T> *node;
			node = Tail;
			for (int i = 0; i < Size - 1; i++)
			{
				 for (int j = 0; j < Size - 1; j++)
					 {
						if (node->value < node->Next->value)
							{
							  int buff = node->value;
							  node->value = node->Next->value;
							  node->Next->value = buff;
							}
							node = node->Next;
					 }
					 node = Tail;
			}



			}



};


#endif
