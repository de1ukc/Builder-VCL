
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Circle_Form.h"
#include "Circle_shape.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Circle A(400, 200, 50) ;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{A.per();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{  A.show(Canvas);

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button6Click(TObject *Sender)
{
  A.square();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
  A.centr();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button7Click(TObject *Sender)
{
if(Timer2->Enabled==true)
Timer2->Enabled=false;
if(Timer1->Enabled==true)
Timer1->Enabled=false;
else
Timer1->Enabled=true;


}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
	 A.uvelich(Canvas,1);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm2::Button8Click(TObject *Sender)
{
		  if(Timer1->Enabled==true)
Timer1->Enabled=false;
if(Timer2->Enabled==true)
Timer2->Enabled=false;
else
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer2Timer(TObject *Sender)
{
A.uvelich(Canvas,-1);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Image1Click(TObject *Sender)
{if(Timer3->Enabled==true)
Timer3->Enabled=false;
else
Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer3Timer(TObject *Sender)
{
POINT cur_pos;
 GetCursorPos(&cur_pos);
A.move(Canvas,cur_pos.x, cur_pos.y-30);
}
//---------------------------------------------------------------------------

