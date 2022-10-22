//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <string>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


using namespace std;
int skobka = 0;
bool flag = 0;
bool flag2 = 0;
int counter = 0;


template <typename T> // ���������, ����������� ����
struct NodeStack
{
    T item;
    NodeStack<T>* next;
};

template <typename T>
class StackList
{
private:
    NodeStack<T>* pTop; // ��������� �� ������� �����

public:
    // ����������� �� ���������
    StackList() { pTop = nullptr; }

    // ��������� ������� � ���� , ������� ���������� �� ������ ������
    void Push(T item)
    {
        NodeStack<T>* p;

        // 1. ������������ �������
            p = new NodeStack<T>;
        p->item = item;
        p->next = pTop; // p ��������� �� 1-� �������

        // 2. ������������� pTop �� p
        pTop = p;
    }

    // ���������� ��������� � �����
    int Count()
    {
        if (pTop == nullptr)
            return 0;
        else
        {
            NodeStack<T>* p = pTop;
            int count = 0;

            while (p != nullptr)
            {
                count++;
                p = p->next;
            }
        }
    }

    // ������� ���� - ������� ��� �������� �� �����
    void Empty()
    {
        NodeStack<T>* p; // �������������� ���������
        NodeStack<T>* p2;

        p = pTop;

        while (p != nullptr)
        {
            p2 = p; // ������� ����� �� p
            p = p->next; // ������� �� ��������� ������� �����
            delete p2; // ������� ������, ���������� ��� ����������� ��������
        }
        pTop = nullptr; // ��������� ������� �����
    }

    // ����� �����
	/*
	void Print()
    {
        //cout << "Object: " << objName << endl;
        if (pTop == nullptr)
            cout << "stack is empty." << endl;
        else
        {
            NodeStack<T>* p; // �������������� ���������
            p = pTop;
            while (p != nullptr)
            {
                cout << p->item << "\t";
                p = p->next;
            }
            cout << endl;
        }
	}
	*/

    // ����������
    ~StackList()
    {
        Empty();
    }

    // �����, ������������ ������� �� �����
    T Pop()
    {

        if (pTop == nullptr)
            return 0;

        NodeStack<T>* p2; // �������������� ���������
        T item;
        item = pTop->item;

        // ������������� ��������� pTop, p2
        p2 = pTop;
        pTop = pTop->next;

        // ���������� ������, ���������� ��� 1-� �������
        delete p2;

        // ������� item
        return item;
    }
    bool isEmpty () {
        return pTop == nullptr;

    }
    T see () {
        if (pTop == nullptr)
            return 0;
        T item;
        item = pTop->item;
        return item;

    }

};
bool isOperarot(char c ){
    if (c == '-' || c == '+' || c == '*' || c == '/' || c == '(' || c == ')' || c == '^' ) return 1;
    else return 0;

}

int map (StackList<char> &a, char s){
    if (a.isEmpty()) return 5;
	if ((a.see() == '+' || a.see() == '-') && (s == '*' || s == '/')) return 0; // ������ �� ������ � ������ ����� � ����
	if ((a.see() == '*' || a.see() == '/') && (s == '+' || s == '-')) return 1; // �������� ��� �������� �� ����� , ����� ���������
	if ((a.see() == '+' || a.see() == '-') && (s == '+' || s == '-')) return 2; // �������� 1 �������, �� ��� ����� ���������
	if ((a.see() == '*' || a.see() == '/') && (s == '*' || s == '/')) return 7;
	if (s == '(') {flag = 1; if (flag == 1 ) {flag2 = 1;}skobka++;return 3;}
	if (s == ')'){skobka--;return 4;}
	if (a.see() == '-' || a.see() == '+' || a.see() == '*' || a.see() == '/' ) {return 6;}// � ����� ������ ���� ������
	if (a.see() == '(') return 8;
	if ((a.see() == '+' || a.see() == '-') && s == '^') {return 9;	}

}

void polsk ( StackList<char> &a,String input, String &output_polsk ) {


	for (int i = 1; i <= input.Length() ; i++)
       {
			char s = input[i];
            if (s >= 'a' && s <= 'z')
            {
			   output_polsk = output_polsk + s;

            }
            else
            {
                int d = map(a,s);

                switch (d) {
                    case 0 : a.Push(s); break;
                    case 1 : while (!a.isEmpty() && a.see() != '(')
                                    {
                                        output_polsk = output_polsk + a.Pop();
                                    }

                                    a.Push(s);
                                break;
                    case 2 :        output_polsk = output_polsk + a.Pop();
                                    a.Push(s);
                                    break;
                    case 3 :        a.Push(s);
                                    break;
                    case 4 :        a.Push(s);
                                    a.Pop();
									while (a.see() != '(')
									{
										output_polsk =  output_polsk + a.Pop();
									}
                                    flag = 0;
                                    if (flag == 0)
                                    {
                                        flag2 == 0;
                                    }

                                    a.Pop();
                                    break;
                    case 5 : a.Push(s);
                                    break;
                    case 6 : output_polsk = output_polsk + a.Pop();
                                    break;
                    case 7 :        output_polsk = output_polsk + a.Pop();
                                    a.Push(s);
									break;
					case 8 :        a.Push(s);
									break;
					case 9 :
									while (a.see() != '(' && a.isEmpty())
									{
										output_polsk =  output_polsk + a.Pop();
									}
									a.Push(s);
									break;
					default: break;

                }

            }


       }


    while (!a.isEmpty())
{
    output_polsk = output_polsk + a.Pop();
}


}
float operation(float b, float a ,char symbol ){

    if (symbol == '+') { return  (float )a+b;}
    if (symbol == '-') {return (float )a-b;}
    if (symbol == '*') {return (float )a*b;}
	if (symbol == '/') {return (float )a/b;}
	if (symbol == '^') {return (float)pow(a,b);}

}

void math(StackList<float> &b,string &output_polsk,string &output_number,float arr[]){

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   StackList<char> a;
   StackList<float> b;
   String input,output_polsk, output_number ;
   input = LabeledEdit1->Text;
   polsk(a,input,output_polsk);
   Edit2->Text = output_polsk;


	//int counter = 0;
	for (int i = 1; i <= output_polsk.Length(); ++i)
		{
			if(output_polsk[i] >= 'a' && output_polsk[i]<= 'z')
			{
				counter++;
			}
		}
	float arr[counter];

	 for (int i = 1; i <= counter; i++)
		{
		  arr[i-1] = StrToFloat(StringGrid1->Cells[0][i]);
		}



	int cnt = 0;
	for (int i = 1; i <= output_polsk.Length(); ++i)
        {  if(!isOperarot(output_polsk[i]))
            {
                b.Push(arr[cnt]);
				cnt++;
			}
            else
                {
                    b.Push(operation(b.Pop(),b.Pop(),output_polsk[i]));
                }
		}
		Edit1->Text = FloatToStr(b.see());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
   LabeledEdit1->Clear();
   Edit1->Clear();
   Edit2->Clear();
   for(int i = 1 ; i <= counter;++i)
   {
	StringGrid1->Cells[0][i] = "";
   }
   counter = 0;
}
//---------------------------------------------------------------------------

