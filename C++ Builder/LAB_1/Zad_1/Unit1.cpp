//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
   int counter = 0;
rectangle head(305,20,335,40);
rectangle telo(300,40,340,150);
legs_and_arms left_leg(332,135,350,200);
legs_and_arms right_leg(290,135,308,200) ;
legs_and_arms left_arm(290,40,301,85) ;
legs_and_arms right_arm(339,40,350,85) ;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{ head.show(Canvas);
 right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 telo.show(Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{right_arm.hide(Canvas);
left_arm.hide(Canvas);
right_leg.hide(Canvas);
left_leg.hide(Canvas);
head.hide(Canvas);

telo.hide(Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{for(int i=0;i<5;i++)
{
 right_arm.move_l(Canvas,10,10);
 left_arm.move_l(Canvas,10,10);
 right_leg.move_l(Canvas,10,10);
 left_leg.move_l(Canvas,10,10);
 telo.move_l(Canvas,10,10);
 head.move_l(Canvas,10,10);
 right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 head.show(Canvas);
 telo.show(Canvas);
 Sleep(40);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{right_arm.move_r(Canvas,10,10);
 left_arm.move_r(Canvas,10,10);
 right_leg.move_r(Canvas,10,10);
 left_leg.move_r(Canvas,10,10);
telo.move_r(Canvas,10,10);
head.move_r(Canvas,10,10);
right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 head.show(Canvas);
 telo.show(Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{if (counter == 1 ) {
}else {
 counter++;
 left_arm.pressF(Canvas,20,20) ;
 right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 head.show(Canvas);
 telo.show(Canvas);}


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{    if (counter == 1) { counter--;
 left_arm.volno(Canvas,20,20) ;
 right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 head.show(Canvas);
 telo.show(Canvas);
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{  right_arm.move_up(Canvas,10,10);
 left_arm.move_up(Canvas,10,10);
 right_leg.move_up(Canvas,10,10);
 left_leg.move_up(Canvas,10,10);
telo.move_up(Canvas,10,10);
head.move_up(Canvas,10,10);
right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 head.show(Canvas);
 telo.show(Canvas);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{ right_arm.move_down(Canvas,10,10);
 left_arm.move_down(Canvas,10,10);
 right_leg.move_down(Canvas,10,10);
 left_leg.move_down(Canvas,10,10);
telo.move_down(Canvas,10,10);
head.move_down(Canvas,10,10);
right_arm.show(Canvas);
 left_arm.show(Canvas);
 right_leg.show(Canvas);
 left_leg.show(Canvas);
 head.show(Canvas);
 telo.show(Canvas);

}
//---------------------------------------------------------------------------

