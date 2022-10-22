//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Triangle_Form.h"
#include "Triangle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
 Triangle B(400,50,60,60);
static int a=0;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
if(Timer2->Enabled==true)
Timer2->Enabled=false;
else
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer2Timer(TObject *Sender)
{
B.perevorot(Canvas,a++);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
B.show(Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
if(Timer4->Enabled==true)
Timer4->Enabled=false;
if(Timer3->Enabled==true)
Timer3->Enabled=false;
else
Timer3->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button4Click(TObject *Sender)
{
	if(Timer3->Enabled==true)
Timer3->Enabled=false;
if(Timer4->Enabled==true)
Timer4->Enabled=false;
else
Timer4->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button5Click(TObject *Sender)
{
B.area();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button6Click(TObject *Sender)
{
B.perimetr();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button7Click(TObject *Sender)
{
 B.centr();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer1Timer(TObject *Sender)
{
POINT cur_pos;
 GetCursorPos(&cur_pos);
B.move(Canvas,a,cur_pos.x, cur_pos.y-30);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer3Timer(TObject *Sender)
{
B.uvelich(Canvas,1,a);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer4Timer(TObject *Sender)
{
 B.uvelich(Canvas,-1,a);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Image1Click(TObject *Sender)
{
 if(Timer1->Enabled==true)
Timer1->Enabled=false;
else
Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
