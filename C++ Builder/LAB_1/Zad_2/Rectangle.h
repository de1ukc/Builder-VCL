//---------------------------------------------------------------------------

#ifndef RectangleH
#define RectangleH
#include "Squared.h"
//---------------------------------------------------------------------------
class Rectangle : public Squared {
public:
Rectangle(){}
Rectangle (int xcentr,int ycentr,int r1, int r2){
this->xcentr = xcentr;
this->ycentr = ycentr;
this->r1 = r1;
this->r2 = r2;
}
};
#endif


