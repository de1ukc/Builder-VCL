//---------------------------------------------------------------------------

#ifndef ExeptionH
#define ExeptionH
#include <vcl.h>
//---------------------------------------------------------------------------
class CloseLoadFromFileWindow : public Exception {
public:
String error;

CloseLoadFromFileWindow(const String &error) : Exception(error) {

 this->error = error ;
}
//   what - ����������� ������� ������ Exceptions
void  what()   {
ShowMessage(error);
}

};
#endif
