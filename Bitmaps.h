// ---------------------------------------------------------------------------
#include <vector>
#include <vcl.h>
#ifndef BitmapsH
#define BitmapsH

// ---------------------------------------------------------------------------
class Bitmaps {
public:
    System::UnicodeString path = "../../Images";

    Graphics::TBitmap * active_cell;
    Graphics::TBitmap * zero;
    Graphics::TBitmap * one;
    Graphics::TBitmap * two;
    Graphics::TBitmap * three;
    Graphics::TBitmap * four;
    Graphics::TBitmap * five;
    Graphics::TBitmap * six;
    Graphics::TBitmap * seven;
    Graphics::TBitmap * eight;
    Graphics::TBitmap * flag;
    Graphics::TBitmap * questionMark;
    Graphics::TBitmap * sun;
    Graphics::TBitmap * sunCry;
    Graphics::TBitmap * sunSunglasses;
    Graphics::TBitmap * redBomb;
	Graphics::TBitmap * justBomb;
	Graphics::TBitmap * crossedBomb;
    
    Bitmaps();
    ~Bitmaps();
};

#endif
