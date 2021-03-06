//---------------------------------------------------------------------------

#ifndef scoresH
#define scoresH
#include <IniFiles.hpp>
//---------------------------------------------------------------------------
#endif

class scores {
	public:
	// variables
    TIniFile *iniScores;
	// functions
    scores();
	~scores();
	// getters and setters to time scores
	int getBeginnerTime();
	void setBeginnerTime(int time);

	int getIntermediateTime();
	void setIntermediateTime(int time);

	int getExpertTime();
	void setExpertTime(int time);
	// getters and setters to player names
	UnicodeString getBeginnerName();
	void setBeginnerName(UnicodeString name);

	UnicodeString getIntermediateName();
	void setIntermediateName(UnicodeString name);

	UnicodeString getExpertName();
	void setExpertName(UnicodeString name);

    void resetScores();

	private:
    // variables

	// functions

};
