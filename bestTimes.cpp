//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "bestTimes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
	gameScores = new scores();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
	this->updateScores();
}
//---------------------------------------------------------------------------



__fastcall TForm4::~TForm4() {
	delete gameScores;
}
void __fastcall TForm4::Button2Click(TObject *Sender)
{
	gameScores->resetScores();
	this->updateScores();	
}
//---------------------------------------------------------------------------
void TForm4::updateScores(){
	// beginner score and name
	beginnerTime->Caption = (UnicodeString)gameScores->getBeginnerTime() + " seconds";
	beginnerName->Caption = gameScores->getBeginnerName();
	// intermedia score and name
	intermediateTime->Caption = (UnicodeString)gameScores->getIntermediateTime() + " seconds";
	intermediateName->Caption = gameScores->getIntermediateName();
	// expert score and name
	expertTime->Caption = (UnicodeString)gameScores->getExpertTime() + " seconds";
	expertName->Caption = gameScores->getExpertName();
}
