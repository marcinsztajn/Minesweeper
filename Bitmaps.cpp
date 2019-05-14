// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Bitmaps.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

Bitmaps::Bitmaps() {
	active_cell = new Graphics::TBitmap();
	active_cell->LoadFromFile(path + "/facingDown.bmp");
	// bitmaps.push_back(active_cell);

	zero = new Graphics::TBitmap();
	zero->LoadFromFile(path + "/0.bmp");
	// bitmaps.push_back(zero);

	one = new Graphics::TBitmap();
	one->LoadFromFile(path + "/1.bmp");
	// bitmaps.push_back(one);

	two = new Graphics::TBitmap();
	two->LoadFromFile(path + "/2.bmp");
	// bitmaps.push_back(two);

	three = new Graphics::TBitmap();
	three->LoadFromFile(path + "/3.bmp");
	// bitmaps.push_back(three);

	four = new Graphics::TBitmap();
	four->LoadFromFile(path + "/4.bmp");
	// bitmaps.push_back(four);

	five = new Graphics::TBitmap();
	five->LoadFromFile(path + "/5.bmp");
	// bitmaps.push_back(five);

	six = new Graphics::TBitmap();
	six->LoadFromFile(path + "/6.bmp");
	// bitmaps.push_back(six);

	seven = new Graphics::TBitmap();
	seven->LoadFromFile(path + "/7.bmp");
	// bitmaps.push_back(seven);

	eight = new Graphics::TBitmap();
	eight->LoadFromFile(path + "/8.bmp");
	// bitmaps.push_back(eight);

	flag = new Graphics::TBitmap();
	flag->LoadFromFile(path + "/flagged.bmp");
	// bitmaps.push_back(flag);

	questionMark = new Graphics::TBitmap();
	questionMark->LoadFromFile(path + "/questionmark.bmp");
	// bitmaps.push_back(questionMark);

	sun = new Graphics::TBitmap();
	sun->LoadFromFile(path + "/sun.bmp");
	// bitmaps.push_back(sun);

	sunCry = new Graphics::TBitmap();
	sunCry->LoadFromFile(path + "/cry.bmp");
	// bitmaps.push_back(sunCry);

	sunSunglasses = new Graphics::TBitmap();
	sunSunglasses->LoadFromFile(path + "/smiley.bmp");
	// bitmaps.push_back(sunSunglasses);

	redBomb = new Graphics::TBitmap();
	redBomb->LoadFromFile(path + "/redBomb.bmp");
	// bitmaps.push_back(redBomb);

	justBomb = new Graphics::TBitmap();
	justBomb->LoadFromFile(path + "/justBomb.bmp");
	// bitmaps.push_back(justBomb);

	crossedBomb = new Graphics::TBitmap();
	crossedBomb->LoadFromFile(path + "/crossedBomb.bmp");
	
}

Bitmaps::~Bitmaps() {
	// for (auto ptr: bitmaps) {
	// delete ptr;
	// }
	delete active_cell, sunSunglasses, redBomb, justBomb;
	delete zero, one, two, three, four, five, six, seven, eight, flag,
		questionMark, sun, sunCry;
}
