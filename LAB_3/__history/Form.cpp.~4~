//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
#include "List.h"
#include "Exeption.h"
#include "Exceptions.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String date_arr[7];
List<Train> a;
int count;

void zapoln(List<Train> &a,TStringList * ts){
Train * arr = new Train[count];
for(int i = 0; i < count; i++)
{ arr[i].name 		 =  ts[0][0+4*i];
  arr[i].destination =  ts[0][1+4*i];
  arr[i].time 		 =  ts[0][2+4*i];
  for (int j = 0; j < 7; j++)
	 {
	  arr[i].day[j] = date_arr[j];
	 }

	 a.push_back(arr[i]);
}
 /*
for (int i = 0; i < count; i++)
	 { ShowMessage(a[i].name);
	 ShowMessage(a[i].destination);
	 ShowMessage(a[i].time);
	 for (int j = 0; j < 7; j++)
		{ ShowMessage(a[i].day[j]);
		  ShowMessage(a[i].seats[j]);
		  break;

		}

	 }
	 */
}

void vivod (List<Train> &a,TComboBox *ComboBox1,TComboBox *ComboBox2,TMemo *Memo1) {
Memo1->Clear();
for (int i = 0; i < count; i++)
	 {
		if (ComboBox1->Text == a[i].name)
		{ Memo1->Lines->Add(a[i].name);
		  Memo1->Lines->Add(a[i].destination);
		  Memo1->Lines->Add(a[i].time);
		  for (int j = 0; j < 7; j++)
			 {
				if (ComboBox2->Text == a[i].day[j])
					{
						Memo1->Lines->Add(a[i].day[j]);
                        Memo1->Lines->Add(a[i].seats[j]);
					}

			 }
		}

	 }




}

void bron (List<Train> &a,TComboBox *ComboBox1,TComboBox *ComboBox2){
 for (int i = 0; i < count; i++)
	{ if (ComboBox1->Text == a[i].name)
		{ for (int j = 0; j < 7; j++)
			 { if (ComboBox2->Text == a[i].day[j])
			   { if (a[i].seats[j] != 0)
				 {
				 a[i].seats[j]--;
				 ShowMessage("Место забронировано");
				 } else {ShowMessage("Извините, мест нет");}

			   }

			 }



		}

	}


}

void raspis (List<Train> &a,TMemo *Memo1){
 Memo1->Clear();
 for (int i = 0; i < count; i++)
	{   for (int j = 0; j < 7; j++)
		   {
			Memo1->Lines->Add(a[i].name);
			Memo1->Lines->Add(a[i].destination);
			Memo1->Lines->Add(a[i].time);
			Memo1->Lines->Add(a[i].day[j]);
			Memo1->Lines->Add(a[i].seats[j]);
			Memo1->Lines->Add("\n");

		   }
	}



}

void checkrasp(List<Train> &a,TMemo *Memo1,TComboBox *ComboBox3,TLabeledEdit *LabeledEdit1){
 Memo1->Clear();
 TDateTime dt = FormatDateTime("hh:mm",LabeledEdit1->Text);
 for (int i = 0; i < count; i++)
	{
	  TDateTime buffer = FormatDateTime("hh:mm",a[i].time);
	  if (buffer < dt)
	  {
		for (int j = 0; j < 7; j++)
		   { if (ComboBox3->Text == a[i].day[j])
			   {
				 Memo1->Lines->Add(a[i].name);
				 Memo1->Lines->Add(a[i].destination);
				 Memo1->Lines->Add(a[i].time);
				 Memo1->Lines->Add(a[i].day[j]);
				 Memo1->Lines->Add(a[i].seats[j]);
			   }

		   }
	  }

	}

}

void datazapis(List<Train> &a){
for (int i = 0; i < count; i++)
	{
	  for (int j = 0; j < 7; j++)
		 {
		   a[i].day[j] = date_arr[j];
		 }
	}


}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	ComboBox1->DoubleBuffered = true;
	ComboBox1->AutoComplete = true;
	ComboBox1->AddItem("Train #1",NULL);
	ComboBox1->AddItem("Train #2",NULL);
	ComboBox1->AddItem("Train #3",NULL);
	ComboBox2->DoubleBuffered = true;
	ComboBox2->AutoComplete = true;
	ComboBox3->DoubleBuffered = true;
	ComboBox3->AutoComplete = true;



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{   try {
        if (FileOpenDialog1->Execute()) {
	 TFileStream * tfile = new TFileStream(FileOpenDialog1->FileName, fmOpenReadWrite);
	 TStringList * ts = new TStringList();
	 ts->LoadFromStream(tfile);
	 count = ts->Count/3;

	 for (int i = 0; i < 7; i++)
		{
		 date_arr[i] = FormatDateTime("dd.mm.yyyy", DateTimePicker1->Date+i);
		}
		zapoln(a,ts);
	 //Memo1->Lines = ts;
	 tfile->Free();

	 delete ts;
	}
	else{ throw CloseLoadFromFileWindow("Вы попытались открыть файл, но отменили действие, данные не записаны в программу, пожалуйста, попробуйте ещё раз");}
	} catch (CloseLoadFromFileWindow &e)
	{
	 ShowMessage(e.error);

	}




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{   ComboBox3->Clear();
	ComboBox2->Clear();
	for (int i = 0; i < 7; i++)
		{
		 date_arr[i] = FormatDateTime("dd.mm.yyyy", DateTimePicker1->Date+i);
		 ComboBox2->AddItem(date_arr[i],NULL);
		 ComboBox3->AddItem(date_arr[i],NULL);
		}


}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{   Memo1->Clear();
	for (int i = 0; i < 7; i++)
		{
		 date_arr[i] = FormatDateTime("dd.mm.yyyy", DateTimePicker1->Date+i);
		 ComboBox2->AddItem(date_arr[i],NULL);
		 ComboBox3->AddItem(date_arr[i],NULL);
		}

} ;

//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
	vivod(a,ComboBox1,ComboBox2,Memo1);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
   bron(a,ComboBox1,ComboBox2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	 raspis(a,Memo1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
   checkrasp(a,Memo1,ComboBox3,LabeledEdit1);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::DateTimePicker1CloseUp(TObject *Sender)
{
	ComboBox3->Clear();
	ComboBox2->Clear();
	for (int i = 0; i < 7; i++)
		{
		 date_arr[i] = FormatDateTime("dd.mm.yyyy", DateTimePicker1->Date+i);
		 ComboBox2->AddItem(date_arr[i],NULL);
		 ComboBox3->AddItem(date_arr[i],NULL);
		}
        datazapis(a);


}
//---------------------------------------------------------------------------

