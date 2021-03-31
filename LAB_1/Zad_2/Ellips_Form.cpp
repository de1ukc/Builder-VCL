//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ellips_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
ellips A(100,100,60,40);
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
A.show(Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
A.per();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button5Click(TObject *Sender)
{
A.centr();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button6Click(TObject *Sender)
{
 A.square();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button7Click(TObject *Sender)
{
if(Timer2->Enabled==true)
Timer2->Enabled=false;
if(Timer1->Enabled==true)
Timer1->Enabled=false;
else
Timer1->Enabled=true;


}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button8Click(TObject *Sender)
{
if(Timer1->Enabled==true)
Timer1->Enabled=false;
if(Timer2->Enabled==true)
Timer2->Enabled=false;
else
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Timer1Timer(TObject *Sender)
{
					A.uvelich(Canvas,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Timer2Timer(TObject *Sender)
{
A.uvelich(Canvas,-1);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Timer3Timer(TObject *Sender)
{
POINT cur_pos;
 GetCursorPos(&cur_pos);
A.move(Canvas,cur_pos.x, cur_pos.y-30);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image1Click(TObject *Sender)
{
if(Timer3->Enabled==true)
Timer3->Enabled=false;
else
Timer3->Enabled=true;
}
//---------------------------------------------------------------------------
