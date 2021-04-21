//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
#include "Deque.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Deque<int> a;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
 Node<int> b;
 b.value = StrToInt(Edit1->Text);
 a.push_back(b.value);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{

	Edit2->Text = IntToStr(a.getSize());

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 a.pop_back();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{   if (a.isEmpty() == false )
	{
		Memo2->Lines->Add(a.top_extract());
		Memo2->Lines->Add("\n");
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
   if (a.isEmpty() == false )
	{
		Memo2->Lines->Add(a.top());
		Memo2->Lines->Add("\n");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
    Memo2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	int N = 15;
	Node<int> *b = new Node<int>[N];

	for (int i = 0; i < N; i++)
	{
		b[i].value = rand() % 26;
		Memo1->Lines->Add(b[i].value);
		Memo1->Lines->Add(" ");
	}
	for (int i = 0; i < N; i++)
	{
	 a.push_back(b[i].value);
	}
   a.Sort();
	for (int i = 0; i < N; i++)
		{
			Memo2->Lines->Add(a.top_extract());
			Memo2->Lines->Add(" ");
		}


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
	int N = 5;
 a.Sort();
 for (int i = 0; i < N; i++)
 {
  Memo2->Lines->Add(a.top_extract()) ;
 }
}
//---------------------------------------------------------------------------
