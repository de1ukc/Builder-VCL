//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
void Stuff::Write(TStringList *ts,int Count, Stuff* st){
	for (int i = 0; i < Count; i++) {
		st[i].name = ts[0][0 +  i * 8];
		st[i].project = ts[0][1 +  i * 8];
		st[i].task = ts[0][2 +  i * 8];
		st[i].start = ts[0][3 +  i * 8];
		st[i].finish = ts[0][4 +  i * 8];
		st[i].from = ts[0][5 +  i * 8];
		st[i].to = ts[0][6 +  i * 8];

	}

}

void Stuff::AddToCombo(TComboBox*ComboBox1, int Count, Stuff* st){
	for (int i = 0; i < Count; i++) {
		ComboBox1->AddItem(st[i].task, NULL);
	}
}

void Stuff::Delete(TMemo*Memo1, TEdit*Edit8, Stuff* st, int Count){

	for (int i = 0; i < Count; i++) {
		if (st[i].name == Edit8->Text) {
			Memo1->Lines->Delete(0 + i * 8);
			Memo1->Lines->Delete(1 + i * 8);
			Memo1->Lines->Delete(2 + i * 8);
			Memo1->Lines->Delete(3 + i * 8);
			Memo1->Lines->Delete(4 + i * 8);
			Memo1->Lines->Delete(5 + i * 8);
			Memo1->Lines->Delete(6 + i * 8);
			Count--;
			break;
		}
	}
}
#pragma package(smart_init)
