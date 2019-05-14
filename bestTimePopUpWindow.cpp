//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MineSwepper.h"
#include "bestTimePopUpWindow.h"
#include "bestTimes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form4->updateScores();
	Form4->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == VK_RETURN) {
		if (Form1->board->getGameProfile() == beginner) {
			Form4->gameScores->setBeginnerTime(Form1->board->getGameTime());
			Form4->gameScores->setBeginnerName(Edit1->Text);	
		}
		else if (Form1->board->getGameProfile() == intermediate) {
			Form4->gameScores->setIntermediateTime(Form1->board->getGameTime());
			Form4->gameScores->setIntermediateName(Edit1->Text);
		}
		else if (Form1->board->getGameProfile() == expert) {
			Form4->gameScores->setExpertTime(Form1->board->getGameTime());
			Form4->gameScores->setExpertName(Edit1->Text);	
		}
		this->Close();	
	}
}
//---------------------------------------------------------------------------
