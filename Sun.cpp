//---------------------------------------------------------------------------

#pragma hdrstop

#include "Sun.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Sun::Sun(Bitmaps *ptr) {
    sun = new Graphics::TBitmap;
    sun = ptr->sun;
}

Sun::~Sun(){
    delete sun;
}
