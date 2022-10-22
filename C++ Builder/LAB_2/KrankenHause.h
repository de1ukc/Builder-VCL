//---------------------------------------------------------------------------

#ifndef KrankenHauseH
#define KrankenHauseH
#include <string>
#include <vcl.h>
//---------------------------------------------------------------------------
class doctors {
	 public :
   String
	 specialisation,
	 name_arzt,
	 second_name_arzt,
	 last_name_arzt,
	 nomer_kabineta,
	 priem_fr,
	 priem_to;


   void Zapis(TStringList * ts, int count,doctors * a)
   {
   for(int i=0;i<count;i++)
   {
   a[i].specialisation= ts[0][0+9*i];
   a[i].name_arzt=ts[0][1+9*i];
   a[i].second_name_arzt=ts[0][2+9*i];
   a[i].last_name_arzt=ts[0][3+9*i];
   a[i].nomer_kabineta=ts[0][4+9*i];
   a[i].priem_fr = ts[0][5+9*i];
   a[i].priem_to = ts[0][6+9*i];

   }
   }

   void vivod (TStringList * ts1, int count,doctors * a){
   for(int i=0; i < count; i++)
   {
   ts1->Add(a[i].specialisation);
   ts1->Add(a[i].name_arzt);
   ts1->Add(a[i].second_name_arzt);
   ts1->Add(a[i].last_name_arzt);
   ts1->Add(a[i].nomer_kabineta);
   ts1->Add("Monday-Friday : Time Start : " + a[i].priem_fr );
   ts1->Add("\t          Time Over : " + a[i].priem_to );
   ts1->Add("\nSaturday - Sunday: weekend");
   ts1->Add("\n");
   ts1->Add("\n");
   }
   }
   };






class talon {
public :
String  Data,
		time,
		nomer_talona,
		name,
		doctor,
		nomer_kabineta;

		bool is_bron;

};






#endif
