//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <vcl.h>
//---------------------------------------------------------------------------
class Stuff{
	public:
	String name;
	String project;
	String task;
	String start;
	String finish;
	String from;
	String to;
	void Write(TStringList *ts,int Count, Stuff* st);
	void AddToCombo(TComboBox*ComboBox1, int Count, Stuff* st);
    void Delete(TMemo*Memo1, TEdit*Edit8, Stuff* st, int Count);
};
#endif
