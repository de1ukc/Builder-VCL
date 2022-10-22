//---------------------------------------------------------------------------

#ifndef TriangleH
#define TriangleH
#include "Rectangle.h"
//---------------------------------------------------------------------------
class Triangle : public Rectangle {
public:
 Triangle(){}
 Triangle(int xcentr,int ycentr,int r1, int r2){
 this->xcentr = xcentr;
 this->ycentr = ycentr;
 this->r1 = r1;
 this->r2 = r2;
 }
 void show (TCanvas *Canvas)  {
 Canvas->Pen->Color=clBlack;
 Canvas->MoveTo(xcentr, ycentr-r2 );
 Canvas->LineTo(xcentr-r1*sqrt(3)/2,ycentr+(r2/2));
 Canvas->LineTo(xcentr+r1*sqrt(3)/2,ycentr+(r2/2));
 Canvas->LineTo(xcentr, ycentr-r2);
 }
 void hide(TCanvas *Canvas){
 Canvas->Pen->Color=clWhite;
  Canvas->MoveTo(xcentr, ycentr-r2 );
 Canvas->LineTo(xcentr-r1*sqrt(3)/2,ycentr+(r2/2));
 Canvas->LineTo(xcentr+r1*sqrt(3)/2,ycentr+(r2/2));
 Canvas->LineTo(xcentr, ycentr-r2);
 }
 void show(TCanvas *Canvas, int a){
Canvas->Pen->Color=clBlack;
Canvas->MoveTo(xcentr -(-1*r2*sin(a*M_PI/180)),ycentr+(-1*r2)*cos(a*M_PI/180));
Canvas->LineTo(xcentr + (-1*r1*sqrt(3)/2)*cos(a*M_PI/180)-(1*r2/2*sin(a*M_PI/180)),ycentr+(1*r2/2)*cos(a*M_PI/180)+(-1*r1*sqrt(3)/2)*sin(a*M_PI/180));
Canvas->LineTo(xcentr + (+1*r1*sqrt(3)/2)*cos(a*M_PI/180)-(1*r2/2*sin(a*M_PI/180)),ycentr+(1*r2/2)*cos(a*M_PI/180)+(+1*r1*sqrt(3)/2)*sin(a*M_PI/180));
Canvas->LineTo(xcentr -(-1*r2*sin(a*M_PI/180)),ycentr+(-1*r2)*cos(a*M_PI/180));
}
void hide(TCanvas *Canvas, int a){
Canvas->Pen->Color=clWhite;
Canvas->MoveTo(xcentr -(-1*r2*sin(a*M_PI/180)),ycentr+(-1*r2)*cos(a*M_PI/180));
Canvas->LineTo(xcentr + (-1*r1*sqrt(3)/2)*cos(a*M_PI/180)-(1*r2/2*sin(a*M_PI/180)),ycentr+(1*r2/2)*cos(a*M_PI/180)+(-1*r1*sqrt(3)/2)*sin(a*M_PI/180));
Canvas->LineTo(xcentr + (+1*r1*sqrt(3)/2)*cos(a*M_PI/180)-(1*r2/2*sin(a*M_PI/180)),ycentr+(1*r2/2)*cos(a*M_PI/180)+(+1*r1*sqrt(3)/2)*sin(a*M_PI/180));
Canvas->LineTo(xcentr -(-1*r2*sin(a*M_PI/180)),ycentr+(-1*r2)*cos(a*M_PI/180));
}
void perevorot(TCanvas *Canvas,int a){

hide(Canvas,--a);
show(Canvas,++a);
}
void uvelich(TCanvas *Canvas, int counter,int a) {

 hide(Canvas,a);
 hide(Canvas,--a);
 r1+=counter; r2+=counter;
 show(Canvas,++a);
}
void move(TCanvas *Canvas,int a,int xn,int yn){
hide(Canvas,a);
hide(Canvas,--a);
xcentr=xn; ycentr=yn;
show(Canvas,++a);
}
void perimetr(){
  float per = 3*sqrt(3)*r1;
 ShowMessage("Периметр квадрата равен " + FloatToStr(per));
}
void area(){
   float area = r1*r1*sqrt(3)/4 ;
   ShowMessage("Площадь квадрата равна " + FloatToStr(area));
}
void centr () {
 ShowMessage("Центр масс находится в точке (" + IntToStr(xcentr)+","+IntToStr(ycentr)+")");
}
};

#endif

