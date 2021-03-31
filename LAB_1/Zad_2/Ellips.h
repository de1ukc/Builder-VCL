//---------------------------------------------------------------------------

#ifndef EllipsH
#define EllipsH
#include "Circle.h"
//---------------------------------------------------------------------------
class ellips :public Circle {
public :
 ellips(){}
 ellips(int xc,int yc,int r1,int r2){
  x=xc;y=yc;this->r1=r1;this->r2=r2;}
void show(TCanvas *Canvas){
Canvas->Pen->Color=clBlack;
Canvas->Ellipse(x-r1,y+r2,x+r1,y-r2);
}
 void hide(TCanvas *Canvas){
Canvas->Pen->Color=clWhite;
Canvas->Ellipse(x-r1,y+r2,x+r1,y-r2);
Canvas->Pen->Color=clBlack;
}
void move(TCanvas *Canvas,int xn,int yn){
hide(Canvas);
x=xn; y=yn;
show(Canvas);
}
 void per(){
 float per =(this->r1 * 2 * M_PI);
 ShowMessage("Длина дуги круга равна " + FloatToStr(per));
}
void square(){
float area = M_PI * radius * radius;
ShowMessage("Площадь круга равна " + FloatToStr(area));
}
void centr () {
 xcentr = ((x+r1)+(x-r2))/2;
 ycentr = ((y-r1)+(y+r2))/2;
 ShowMessage("Центр масс находится в точке (" + IntToStr(xcentr)+","+IntToStr(ycentr)+")");
}
void uvelich(TCanvas *Canvas, int counter) {
 hide(Canvas);
 r1+=counter; r2+=counter;
 show(Canvas);
}
};
#endif

