// ---------------------------------------------------------------------------
#include <vcl.h>
#include "Bitmaps.h"
#ifndef CellH
#define CellH
// ---------------------------------------------------------------------------

class Cell {
private:
	bool active; 		// if haven't clicked yet then active = true, else false
	bool flagged;       // true if has flag, false if no flag
	bool questionMarked;
	bool mined;			// indicates if cell has a mine/bomb inside, default false
	int minesAround;

public:
	Cell();
	// request methods
	bool isActive();
	bool isFlagged();
	bool isQuestionMarked();
	// methods

	bool hasMine();
	void setMine();
	void setQuestionMark();
	void setFlag();
	void deactivate();
	void setHowManyMinesAround(int minesAround);
	void resetFlag();
	void resetQuestionmark();
	void activate();
	void resetAllProperties();

	int howManyMinesAround();
};

#endif
