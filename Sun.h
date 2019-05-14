//---------------------------------------------------------------------------

#ifndef SunH
#define SunH
#include <vcl.h>
#include "Bitmaps.h"

//---------------------------------------------------------------------------

class Sun {
    public:
    Bitmaps *bitmapy;
    Graphics::TBitmap *sun;

    Sun(Bitmaps *ptr);
    ~Sun();
    
};

#endif
