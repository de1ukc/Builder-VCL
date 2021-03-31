//---------------------------------------------------------------------------
		#include <vcl.h>
#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#endif

  class rectangle {
 protected :
   int x1;
   int y1;
   int x2;
   int y2;
   public :
   rectangle(){}
   rectangle(int xc, int yc, int xcc, int ycc){x1=xc;y1=yc;x2=xcc;y2=ycc;}
	  void show (TCanvas * Canvas)
	  { Canvas->Pen->Color=clBlack;
		Canvas->Rectangle(x1,y1,x2,y2);
	  }
	  void hide ( TCanvas * Canvas )
	  { Canvas->Pen->Color=clWhite;
	  Canvas->Rectangle(x1,y1,x2,y2);
	   Canvas->Pen->Color=clBlack;
	  }
	  void move_r ( TCanvas * Canvas , int xn, int yn)
	  { hide (Canvas);
	   x1+=xn; x2+=xn;
	   //y1-=yn; y2-=yn;
	   show (Canvas);
	  }
	  void move_l ( TCanvas * Canvas , int xn, int yn)
	  { hide (Canvas);
	   x1-=xn; x2-=xn;
	   //y1+=yn; y2+=yn;
	   show (Canvas);
	  }
	  void move_up( TCanvas * Canvas , int xn, int yn)
	  { hide (Canvas);

	   y1-=yn; y2-=yn;
	   show (Canvas);
	  }
	  void move_down( TCanvas * Canvas , int xn, int yn)
	  { hide (Canvas);

	   y1+=yn; y2+=yn;
	   show (Canvas);
	  }
	  ~rectangle(){}
  };
  class legs_and_arms : public rectangle {
  public :
  legs_and_arms(){}
  legs_and_arms(int xc, int yc, int xcc, int ycc){x1=xc;y1=yc;x2=xcc;y2=ycc;}
   void pressF(TCanvas * Canvas, int xn, int yn){
	   hide (Canvas);
	   y1-=yn; y2-=yn;
	   show (Canvas);
   }
   void volno(TCanvas * Canvas, int xn, int yn){
	   hide (Canvas);
	   y1+=yn; y2+=yn;
	   show (Canvas);
   }






  };
