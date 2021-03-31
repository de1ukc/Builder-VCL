//---------------------------------------------------------------------------

#ifndef Square_FormH
#define Square_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Squared.h"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TTimer *Timer1;
	TImage *Image1;
	TTimer *Timer2;
	TTimer *Timer3;
	TTimer *Timer4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Timer4Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
//extern PACKAGE TForm3 *Form3;
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
