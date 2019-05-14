//---------------------------------------------------------------------------

#pragma hdrstop

#include "scores.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

scores::scores(){
	this->iniScores = new TIniFile("./scores.ini");
	// check if already exists - if not, generate defualt values
	if (!iniScores->SectionExists("Beginner")) {
		this->resetScores();
	}
}
scores::~scores() {
	delete this->iniScores;
}
// time gatters and setters
int scores::getBeginnerTime(){
	return this->iniScores->ReadInteger("Beginner","Time",999);
}
void scores::setBeginnerTime(int time){
	this->iniScores->WriteInteger("Beginner","Time",time);
}

int scores::getIntermediateTime(){
	return this->iniScores->ReadInteger("Intermediate","Time",999);
}

void scores::setIntermediateTime(int time){
	this->iniScores->WriteInteger("Intermediate","Time",time);
}

int scores::getExpertTime(){
	return this->iniScores->ReadInteger("Expert","Time",999);
}

void scores::setExpertTime(int time){
	this->iniScores->WriteInteger("Expert","Time",time);
}
// getters and setters to player names
UnicodeString scores::getBeginnerName(){
	return this->iniScores->ReadString("Beginner","Name","Anonymous");
}

void scores::setBeginnerName(UnicodeString name){
	iniScores->WriteString("Beginner","Name", name);
}

UnicodeString scores::getIntermediateName(){
	return this->iniScores->ReadString("Intermediate","Name","Anonymous");
}

void scores::setIntermediateName(UnicodeString name){
	this->iniScores->WriteString("Intermediate","Name",name);
}

UnicodeString scores::getExpertName(){
	return this->iniScores->ReadString("Expert","Name","Anonymous");
}

void scores::setExpertName(UnicodeString name){
    this->iniScores->WriteString("Expert","Name",name);
}

void scores::resetScores(){
    iniScores->WriteString("Beginner","Time", "999");
	iniScores->WriteString("Beginner","Name", "Anonymous");
	iniScores->WriteString("Intermediate","Time", "999");
	iniScores->WriteString("Intermediate","Name", "Anonymous");
	iniScores->WriteString("Expert","Time", "999");
	iniScores->WriteString("Expert","Name", "Anonymous");
}
