//---------------------------------------------------------------------------
     #include <vcl.h>

#ifndef CircleH
#define CircleH
#include "Shape.h"
//---------------------------------------------------------------------------
class Circle : public shape{
protected :
int x,y,radius;
int r1,r2;
public :
Circle (){}
Circle(int xc,int yc,int rc) { x=xc;y=yc;radius=rc; }
void show(TCanvas *Canvas){
Canvas->Pen->Color=clBlack;
Canvas->Ellipse(x-radius,y+radius,x+radius,y-radius);
}
 void hide(TCanvas *Canvas){
Canvas->Pen->Color=clWhite;
Canvas->Ellipse(x-radius,y+radius,x+radius,y-radius);
Canvas->Pen->Color=clBlack;
}
void move(TCanvas *Canvas,int xn,int yn){
hide(Canvas);
x=xn; y=yn;
show(Canvas);
}
 void per(){
 float per =(this->radius * 2 * M_PI);
 ShowMessage("Длина дуги круга равна " + FloatToStr(per));
}
void square(){
float area = M_PI * radius * radius;
ShowMessage("Площадь круга равна " + FloatToStr(area));
}
void centr () {
 xcentr = ((x+radius)+(x-radius))/2;
 ycentr = ((y-radius)+(y+radius))/2;
 ShowMessage("Центр масс находится в точке (" + IntToStr(xcentr)+","+IntToStr(ycentr)+")");


}
void uvelich(TCanvas *Canvas, int counter) {


 hide(Canvas);
 radius+=counter;
 show(Canvas);

}
};
#endif
/*class shape {
 protected:
int x1,y1; // moveto
int x2,y2; //lineto
int xcentr, ycentr;
int r1,r2;
float area;
float perimeter;

}; */


